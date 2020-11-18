#include "TitleSelectedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TitleSelectedMessage::deserialize(CustomDataInput *input) {
    this->_titleIdFunc(input);
}

void TitleSelectedMessage::_titleIdFunc(CustomDataInput *input) {
    this->titleId = input->readVarUhShort();
    if (this->titleId < 0) {

    }
}
