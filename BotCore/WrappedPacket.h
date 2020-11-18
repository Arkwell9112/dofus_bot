#ifndef DOFUS2BOTPREALPHA_0_2_WRAPPEDPACKET_H
#define DOFUS2BOTPREALPHA_0_2_WRAPPEDPACKET_H

#include "Packet.h"
#include "chrono"

class WrappedPacket {
public:
    explicit WrappedPacket(Packet *packet);

    bool isReadyToSend();

    clock_t getBeginWaitTime() const;

    unsigned int getRandomWaitTime() const;

    Packet *getPacket() const;

private:
    clock_t beginWaitTime = 0;
    unsigned int randomWaitTime = 0;
    Packet *packet = nullptr;
};


#endif //DOFUS2BOTPREALPHA_0_2_WRAPPEDPACKET_H
