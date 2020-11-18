#include "InteractiveUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveUseRequestMessage::deserialize(CustomDataInput *input) {
    this->_elemIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveUseRequestMessage::_elemIdFunc(CustomDataInput *input) {
    this->elemId = input->readVarUhInt();
    if (this->elemId < 0) {

    }
}

void InteractiveUseRequestMessage::_skillInstanceUidFunc(CustomDataInput *input) {
    this->skillInstanceUid = input->readVarUhInt();
    if (this->skillInstanceUid < 0) {

    }
}
