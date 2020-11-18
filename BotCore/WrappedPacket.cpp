#include "WrappedPacket.h"
#include "TimeHelper.h"

WrappedPacket::WrappedPacket(Packet *packet) {
    this->packet = packet;
    this->randomWaitTime = TimeHelper::getInstance()->getRandomWaitTime();
    this->beginWaitTime = clock();
}

clock_t WrappedPacket::getBeginWaitTime() const {
    return beginWaitTime;
}

unsigned int WrappedPacket::getRandomWaitTime() const {
    return randomWaitTime;
}

Packet *WrappedPacket::getPacket() const {
    return packet;
}

bool WrappedPacket::isReadyToSend() {
    return TimeHelper::isTimeElapsed(this->beginWaitTime, this->randomWaitTime);
}
