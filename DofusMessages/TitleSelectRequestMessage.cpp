#include "TitleSelectRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitleSelectRequestMessage::deserialize(CustomDataInput *input) {
    this->_titleIdFunc(input);
}

void TitleSelectRequestMessage::_titleIdFunc(CustomDataInput *input) {
    this->titleId = input->readVarUhShort();
    if (this->titleId < 0) {

    }
}
