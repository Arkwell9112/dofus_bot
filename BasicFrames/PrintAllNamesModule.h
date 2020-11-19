#ifndef DOFUS2BOTPREALPHA_0_2_PRINTALLNAMESMODULE_H
#define DOFUS2BOTPREALPHA_0_2_PRINTALLNAMESMODULE_H

#include "../BotCore/FileLoader.h"
#include "../BotCore/Packet.h"

class PrintAllNamesModule {
public:
    static void printPacket(Packet *packet);

private:
    static char *messageNames;
};


#endif //DOFUS2BOTPREALPHA_0_2_PRINTALLNAMESMODULE_H
