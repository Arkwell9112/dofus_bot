#include "ExchangeIsReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeIsReadyMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_readyFunc(input);
}

void ExchangeIsReadyMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void ExchangeIsReadyMessage::_readyFunc(CustomDataInput *input) {
    this->ready = input->readBoolean();
}
