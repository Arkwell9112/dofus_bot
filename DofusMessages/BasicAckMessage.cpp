#include "BasicAckMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicAckMessage::deserialize(CustomDataInput *input) {
    this->_seqFunc(input);
    this->_lastPacketIdFunc(input);
}

void BasicAckMessage::_seqFunc(CustomDataInput *input) {
    this->seq = input->readVarUhInt();
    if (this->seq < 0) {

    }
}

void BasicAckMessage::_lastPacketIdFunc(CustomDataInput *input) {
    this->lastPacketId = input->readVarUhShort();
    if (this->lastPacketId < 0) {

    }
}
