#ifndef DOFUS2BOTPREALPHA_0_2_PACKET_H
#define DOFUS2BOTPREALPHA_0_2_PACKET_H

#include "BotCoreAPI.h"
#include "BotCoreException.h"
#include "MapComplementaryInformationsDataMessage.h"

class Packet {
public:
    DeserializeInterface *getMessage();

    unsigned int getPacketId();

    unsigned int getPacketSize();

    char *getPacketContent();

    Packet(unsigned int packetId, unsigned int instanceId, char *realInstanceId, unsigned int packetSize, char *data);

    ~Packet();

    void deserializePacket();

    unsigned int getInstanceId();

    char *getRealInstanceId();

private:
    DeserializeInterface *message = nullptr;
    unsigned int packetId = 0;
    unsigned int packetSize = 0;
    char *content = nullptr;
    unsigned int instanceId = 0;
    char *realInstanceId = nullptr;
};


#endif //DOFUS2BOTPREALPHA_0_2_PACKET_H