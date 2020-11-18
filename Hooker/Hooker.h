#ifndef DOFUS2BOTPREALPHA_0_2_HOOKER_H
#define DOFUS2BOTPREALPHA_0_2_HOOKER_H

#include "winsock2.h"
#include "windows.h"

typedef int (WSAAPI *RECV)(SOCKET s, char *buffer, int len, int flags);

typedef int (WSAAPI *SEND)(SOCKET s, char *buffer, int len, int flags);

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);

#endif //DOFUS2BOTPREALPHA_0_2_HOOKER_H
