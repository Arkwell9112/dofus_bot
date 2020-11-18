#include "MountEquipedErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountEquipedErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorTypeFunc(input);
}

void MountEquipedErrorMessage::_errorTypeFunc(CustomDataInput *input) {
    this->errorType = input->readByte();
    if (this->errorType < 0) {

    }
}
