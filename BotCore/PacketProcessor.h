#ifndef DOFUS2BOTPREALPHA_0_2_PACKETPROCESSOR_H
#define DOFUS2BOTPREALPHA_0_2_PACKETPROCESSOR_H

#include "PacketMarker.h"
#include "BaseFrame.h"
#include "../BasicFrames/PrintFrame.h"

class PacketProcessor {
public:
    void Process(char *buffer, int len, unsigned int address, bool isSending);

    void changeFrame(BaseFrame *newFrame);

    static PacketProcessor *getInstance();

    unsigned int getGlobalInstanceId();

private:
    static PacketMarker *
    retrieveProperMarker(unsigned int address, std::vector<PacketMarker *> *markers, bool isSending);

    PacketProcessor() = default;

    std::vector<PacketMarker *> recvMarkers;
    std::vector<PacketMarker *> sendMarkers;

    BaseFrame *frame = nullptr;

    unsigned int globalInstanceId = 0;

    static PacketProcessor *singleton;
};


#endif //DOFUS2BOTPREALPHA_0_2_PACKETPROCESSOR_H