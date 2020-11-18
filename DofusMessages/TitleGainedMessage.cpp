#include "TitleGainedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitleGainedMessage::deserialize(CustomDataInput *input) {
    this->_titleIdFunc(input);
}

void TitleGainedMessage::_titleIdFunc(CustomDataInput *input) {
    this->titleId = input->readVarUhShort();
    if (this->titleId < 0) {

    }
}
