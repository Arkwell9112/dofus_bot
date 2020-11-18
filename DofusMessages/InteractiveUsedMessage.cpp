#include "InteractiveUsedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveUsedMessage::deserialize(CustomDataInput *input) {
    this->_entityIdFunc(input);
    this->_elemIdFunc(input);
    this->_skillIdFunc(input);
    this->_durationFunc(input);
    this->_canMoveFunc(input);
}

void InteractiveUsedMessage::_entityIdFunc(CustomDataInput *input) {
    this->entityId = input->readVarUhLong();
    if (this->entityId < 0 || this->entityId > 9007199254740990) {

    }
}

void InteractiveUsedMessage::_elemIdFunc(CustomDataInput *input) {
    this->elemId = input->readVarUhInt();
    if (this->elemId < 0) {

    }
}

void InteractiveUsedMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhShort();
    if (this->skillId < 0) {

    }
}

void InteractiveUsedMessage::_durationFunc(CustomDataInput *input) {
    this->duration = input->readVarUhShort();
    if (this->duration < 0) {

    }
}

void InteractiveUsedMessage::_canMoveFunc(CustomDataInput *input) {
    this->canMove = input->readBoolean();
}
