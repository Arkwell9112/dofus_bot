#include "PacketMarker.h"

std::vector<Packet *> PacketMarker::MarkPackets(char *inputBuffer, int len) {
    if (len <= 0) {
        return std::vector<Packet *>{};
    }
    char *currentBuffer = nullptr;
    unsigned int redSize = 0;
    if (buffer != nullptr) {
        char *neoBuffer = static_cast<char *>(realloc(buffer, len + bufferLen));
        if (neoBuffer == nullptr) {
            throw BotCoreException(1);
        }
        memcpy(&neoBuffer[bufferLen], &inputBuffer[0], len);
        buffer = neoBuffer;
        currentBuffer = buffer;
        redSize = len + bufferLen;
    } else {
        currentBuffer = inputBuffer;
        redSize = len;
    }

    CustomDataInput input(currentBuffer);

    unsigned int savedPosition = 0;
    std::vector<Packet *> packets;
    while (input.getPosition() < redSize) {
        savedPosition = input.getPosition();
        unsigned int remainingBytes = redSize - input.getPosition();
        if (remainingBytes >= 2) {
            unsigned int staticHeader = input.readUnsignedShort();
            unsigned int packetId = staticHeader >> 2;
            unsigned int packetSizeSize = staticHeader & 3;
            remainingBytes = redSize - input.getPosition();
            unsigned int instanceId = 0;
            char *realInstanceId = nullptr;
            if (isInstanceId && remainingBytes >= 4) {
                realInstanceId = &currentBuffer[input.getPosition()];
                instanceId = input.readUnsignedInt();
            } else if (isInstanceId) {
                break;
            }
            remainingBytes = redSize - input.getPosition();
            if (remainingBytes >= packetSizeSize) {
                unsigned int packetSize = input.readPacketSizeSize(packetSizeSize);
                remainingBytes = redSize - input.getPosition();
                if (remainingBytes >= packetSize) {
                    packets.push_back(new Packet(packetId, instanceId, realInstanceId, packetSize,
                                                 &currentBuffer[input.getPosition()]));
                    input.setPosition(input.getPosition() + packetSize);
                } else {
                    break;
                }
            } else {
                break;
            }
        } else {
            break;
        }
    }

    if (input.getPosition() < redSize) {
        unsigned int remainingBytes = redSize - savedPosition;
        char *neoBuffer = static_cast<char *>(malloc(remainingBytes));
        if (neoBuffer == nullptr) {
            throw BotCoreException(1);
        }
        memcpy(&neoBuffer[0], &currentBuffer[savedPosition], remainingBytes);
        if (buffer != nullptr) {
            free(buffer);
        }
        buffer = neoBuffer;
        bufferLen = remainingBytes;
    } else {
        if (buffer != nullptr) {
            free(buffer);
            buffer = nullptr;
        }
    }
    return packets;
}

PacketMarker::PacketMarker(bool isInstanceId, unsigned int address) {
    this->isInstanceId = isInstanceId;
    this->address = address;
}

unsigned int PacketMarker::getAddress() {
    return this->address;
}
