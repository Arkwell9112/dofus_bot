#include "LivingObjectChangeSkinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LivingObjectChangeSkinRequestMessage::deserialize(CustomDataInput *input) {
    this->_livingUIDFunc(input);
    this->_livingPositionFunc(input);
    this->_skinIdFunc(input);
}

void LivingObjectChangeSkinRequestMessage::_livingUIDFunc(CustomDataInput *input) {
    this->livingUID = input->readVarUhInt();
    if (this->livingUID < 0) {

    }
}

void LivingObjectChangeSkinRequestMessage::_livingPositionFunc(CustomDataInput *input) {
    this->livingPosition = input->readUnsignedByte();
    if (this->livingPosition < 0 || this->livingPosition > 255) {

    }
}

void LivingObjectChangeSkinRequestMessage::_skinIdFunc(CustomDataInput *input) {
    this->skinId = input->readVarUhInt();
    if (this->skinId < 0) {

    }
}
