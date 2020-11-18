#ifndef DOFUS2BOTPREALPHA_0_2_PACKETMARKER_H
#define DOFUS2BOTPREALPHA_0_2_PACKETMARKER_H

#include "Packet.h"

class PacketMarker {
public:
    std::vector<Packet *> MarkPackets(char *inputBuffer, int len);

    explicit PacketMarker(bool isInstanceId, unsigned int address);

    unsigned int getAddress();

private:
    unsigned int bufferLen = 0;
    char *buffer = nullptr;
    bool isInstanceId = false;
    unsigned int address = 0;
};

#endif //DOFUS2BOTPREALPHA_0_2_PACKETMARKER_H