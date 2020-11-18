#include "TitleLostMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitleLostMessage::deserialize(CustomDataInput *input) {
    this->_titleIdFunc(input);
}

void TitleLostMessage::_titleIdFunc(CustomDataInput *input) {
    this->titleId = input->readVarUhShort();
    if (this->titleId < 0) {

    }
}
