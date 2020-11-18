#include "InteractiveUseEndedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveUseEndedMessage::deserialize(CustomDataInput *input) {
    this->_elemIdFunc(input);
    this->_skillIdFunc(input);
}

void InteractiveUseEndedMessage::_elemIdFunc(CustomDataInput *input) {
    this->elemId = input->readVarUhInt();
    if (this->elemId < 0) {

    }
}

void InteractiveUseEndedMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhShort();
    if (this->skillId < 0) {

    }
}
