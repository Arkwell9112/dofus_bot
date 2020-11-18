#include "InteractiveUseErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveUseErrorMessage::deserialize(CustomDataInput *input) {
    this->_elemIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveUseErrorMessage::_elemIdFunc(CustomDataInput *input) {
    this->elemId = input->readVarUhInt();
    if (this->elemId < 0) {

    }
}

void InteractiveUseErrorMessage::_skillInstanceUidFunc(CustomDataInput *input) {
    this->skillInstanceUid = input->readVarUhInt();
    if (this->skillInstanceUid < 0) {

    }
}
