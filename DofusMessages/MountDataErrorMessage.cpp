#include "MountDataErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountDataErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void MountDataErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
