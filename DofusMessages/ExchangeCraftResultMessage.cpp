#include "ExchangeCraftResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftResultMessage::deserialize(CustomDataInput *input) {
    this->_craftResultFunc(input);
}

void ExchangeCraftResultMessage::_craftResultFunc(CustomDataInput *input) {
    this->craftResult = input->readByte();
    if (this->craftResult < 0) {

    }
}
