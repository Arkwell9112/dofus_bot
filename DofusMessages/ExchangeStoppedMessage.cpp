#include "ExchangeStoppedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStoppedMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void ExchangeStoppedMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhLong();
    if (this->id < 0 || this->id > 9007199254740990) {

    }
}
