#include <cstring>
#include "PrintAllNamesModule.h"

char *PrintAllNamesModule::messageNames = nullptr;

void PrintAllNamesModule::printPacket(Packet *packet) {
    if (messageNames == nullptr) {
        messageNames = FileLoader::loadFile("C:\\Users\\Edouard\\AnkamaInjector\\DofusProtocol.txt", nullptr);
    }
    int idSize = snprintf(nullptr, 0, "|%d|", packet->getPacketId());
    char idName[idSize + 1];
    snprintf(idName, idSize + 1, "|%d|", packet->getPacketId());
    char *name = strstr(messageNames, idName);
    if (name != nullptr) {
        int nameSize = 0;
        while (name[nameSize] != "\r"[0]) {
            nameSize++;
        }
        char fullName[nameSize + 1];
        memcpy(fullName, name, nameSize);
        fullName[nameSize] = "\0"[0];
        printf("%s\n", fullName);
    }
}
