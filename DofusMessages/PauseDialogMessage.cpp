#include "PauseDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PauseDialogMessage::deserialize(CustomDataInput *input) {
    this->_dialogTypeFunc(input);
}

void PauseDialogMessage::_dialogTypeFunc(CustomDataInput *input) {
    this->dialogType = input->readByte();
    if (this->dialogType < 0) {

    }
}
