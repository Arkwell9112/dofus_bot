#include "LivingObjectDissociateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LivingObjectDissociateMessage::deserialize(CustomDataInput *input) {
    this->_livingUIDFunc(input);
    this->_livingPositionFunc(input);
}

void LivingObjectDissociateMessage::_livingUIDFunc(CustomDataInput *input) {
    this->livingUID = input->readVarUhInt();
    if (this->livingUID < 0) {

    }
}

void LivingObjectDissociateMessage::_livingPositionFunc(CustomDataInput *input) {
    this->livingPosition = input->readUnsignedByte();
    if (this->livingPosition < 0 || this->livingPosition > 255) {

    }
}
