#include "LeaveDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LeaveDialogMessage::deserialize(CustomDataInput *input) {
    this->_dialogTypeFunc(input);
}

void LeaveDialogMessage::_dialogTypeFunc(CustomDataInput *input) {
    this->dialogType = input->readByte();
    if (this->dialogType < 0) {

    }
}
