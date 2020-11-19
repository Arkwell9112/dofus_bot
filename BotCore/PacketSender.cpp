#include "PacketSender.h"
#include "PacketProcessor.h"

PacketSender *PacketSender::singleton = nullptr;

PacketSender *PacketSender::getInstance() {
    if (PacketSender::singleton == nullptr) {
        PacketSender::singleton = new PacketSender();
    }
    return PacketSender::singleton;
}

void PacketSender::setFlags(SOCKET s, int flags0, SEND nnsend0) {
    this->socket = s;
    this->flags = flags0;
    this->nnsend = nnsend0;
}

void PacketSender::sendPacket(Packet *packet) {
    printf("Sent %d\n", packet->getPacketId());
    unsigned int packetSizeSize = PacketSender::getPacketSizeSize(packet->getPacketSize());
    char buffer[6 + packetSizeSize + packet->getPacketSize()];
    unsigned int staticHeader = (packet->getPacketId() << 2) | packetSizeSize;
    unsigned int instanceId = PacketProcessor::getInstance()->getGlobalInstanceId();
    CustomDataOutput output(buffer);
    output.writeUnsignedShort(staticHeader);
    output.writeUnsignedInt(instanceId);
    output.writePacketSizeSize(packet->getPacketSize(), packetSizeSize);
    output.writeBytes(packet->getPacketContent(), (int) packet->getPacketSize());
    nnsend(this->socket, buffer, (int) output.getPosition(), this->flags);
    delete packet;
}

unsigned int PacketSender::getPacketSizeSize(unsigned int packetSize) {
    if (packetSize == 0) {
        return 0;
    } else if (packetSize < 256) {
        return 1;
    } else if (packetSize < 65536) {
        return 2;
    } else {
        return 3;
    }
}

void PacketSender::addPacketToSend(Packet *packet) {
    if (sendThread == nullptr) {
        sendThread = new std::thread(&PacketSender::updateSending, this);
    }
    WrappedPacket wrappedPacket(packet);
    toSendPackets.push_back(wrappedPacket);
}

void PacketSender::updateSending() {
    while (true) {
        for (int i = 0; i < toSendPackets.size(); i++) {
            if (toSendPackets.at(i).isReadyToSend()) {
                Packet *currentPacket = toSendPackets.at(i).getPacket();
                toSendPackets.erase(toSendPackets.begin() + i);
                this->sendPacket(currentPacket);
            }
        }
        std::this_thread::sleep_for(std::chrono::duration<double, std::milli>(100));
    }
}
