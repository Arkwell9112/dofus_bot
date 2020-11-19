#ifndef DOFUS2BOTPREALPHA_0_2_PACKETSENDER_H
#define DOFUS2BOTPREALPHA_0_2_PACKETSENDER_H

#include "../Hooker/Hooker.h"
#include "Packet.h"
#include "WrappedPacket.h"
#include "thread"

class PacketSender {
public:
    void setFlags(SOCKET s, int flags, SEND nnsend0);

    static PacketSender *getInstance();

    void addPacketToSend(Packet *packet);

    void updateSending();

    void sendPacket(Packet *packet);

private:
    static unsigned int getPacketSizeSize(unsigned int packetSize);

    static PacketSender *singleton;

    PacketSender() = default;

    SOCKET socket = 0;
    int flags = 0;
    SEND nnsend = nullptr;

    std::vector<WrappedPacket> toSendPackets;

    std::thread *sendThread = nullptr;
};


#endif //DOFUS2BOTPREALPHA_0_2_PACKETSENDER_H
