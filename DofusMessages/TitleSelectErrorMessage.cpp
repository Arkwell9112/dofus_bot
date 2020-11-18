#include "TitleSelectErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitleSelectErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void TitleSelectErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
