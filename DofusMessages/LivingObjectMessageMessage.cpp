#include "LivingObjectMessageMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LivingObjectMessageMessage::deserialize(CustomDataInput *input) {
    this->_msgIdFunc(input);
    this->_timeStampFunc(input);
    this->_ownerFunc(input);
    this->_objectGenericIdFunc(input);
}

void LivingObjectMessageMessage::_msgIdFunc(CustomDataInput *input) {
    this->msgId = input->readVarUhShort();
    if (this->msgId < 0) {

    }
}

void LivingObjectMessageMessage::_timeStampFunc(CustomDataInput *input) {
    this->timeStamp = input->readInt();
    if (this->timeStamp < 0) {

    }
}

void LivingObjectMessageMessage::_ownerFunc(CustomDataInput *input) {
    this->owner = input->readUTF();
}

void LivingObjectMessageMessage::_objectGenericIdFunc(CustomDataInput *input) {
    this->objectGenericId = input->readVarUhShort();
    if (this->objectGenericId < 0) {

    }
}
