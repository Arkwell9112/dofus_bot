#include "BasicLatencyStatsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicLatencyStatsMessage::deserialize(CustomDataInput *input) {
    this->_latencyFunc(input);
    this->_sampleCountFunc(input);
    this->_maxFunc(input);
}

void BasicLatencyStatsMessage::_latencyFunc(CustomDataInput *input) {
    this->latency = input->readUnsignedShort();
    if (this->latency < 0 || this->latency > 65535) {

    }
}

void BasicLatencyStatsMessage::_sampleCountFunc(CustomDataInput *input) {
    this->sampleCount = input->readVarUhShort();
    if (this->sampleCount < 0) {

    }
}

void BasicLatencyStatsMessage::_maxFunc(CustomDataInput *input) {
    this->max = input->readVarUhShort();
    if (this->max < 0) {

    }
}
