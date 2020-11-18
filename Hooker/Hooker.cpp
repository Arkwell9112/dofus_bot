#include <sec_api/stdio_s.h>
#include <eh.h>
#include "Hooker.h"
#include "MinHook.h"
#include "../BotCore/PacketProcessor.h"
#include "../BotCore/PacketSender.h"

RECV nrecv = nullptr;
SEND nsend = nullptr;

HANDLE mutex;

int DetourRecv(SOCKET s, char *buffer, int len, int flags) {
    WaitForSingleObject(mutex, INFINITE);
    int red = nrecv(s, buffer, len, flags);
    int size = 16;
    sockaddr addr{};
    int peer = getpeername(s, &addr, &size);
    if (peer == 0 && *(unsigned char *) &addr.sa_data[2] == 172) {
        unsigned int address = *(unsigned int *) &addr.sa_data[2];
        PacketProcessor::getInstance()->Process(buffer, red, address, false);
    }
    ReleaseMutex(mutex);
    return red;
}

int DetourSend(SOCKET s, char *buffer, int len, int flags) {
    WaitForSingleObject(mutex, INFINITE);
    int size = 16;
    sockaddr addr{};
    int peer = getpeername(s, &addr, &size);
    if (peer == 0 && *(unsigned char *) &addr.sa_data[2] == 172) {
        unsigned int address = *(unsigned int *) &addr.sa_data[2];
        PacketSender::getInstance()->setFlags(s, flags, nsend);
        PacketProcessor::getInstance()->Process(buffer, len, address, true);
    }
    int sent = nsend(s, buffer, len, flags);
    ReleaseMutex(mutex);
    return sent;
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    AllocConsole();
    FILE *fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    mutex = CreateMutexA(nullptr, false, nullptr);

    if (MH_Initialize() != MH_OK) {
        return FALSE;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(&send), reinterpret_cast<LPVOID>(&DetourSend),
                      reinterpret_cast<LPVOID *>(&nsend)) != MH_OK) {
        return FALSE;
    }

    if (MH_CreateHook(reinterpret_cast<LPVOID>(&recv), reinterpret_cast<LPVOID>(&DetourRecv),
                      reinterpret_cast<LPVOID *>(&nrecv)) != MH_OK) {
        return FALSE;
    }

    if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) {
        return FALSE;
    }

    return TRUE;
}