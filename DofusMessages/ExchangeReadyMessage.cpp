#include "ExchangeReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeReadyMessage::deserialize(CustomDataInput *input) {
    this->_readyFunc(input);
    this->_stepFunc(input);
}

void ExchangeReadyMessage::_readyFunc(CustomDataInput *input) {
    this->ready = input->readBoolean();
}

void ExchangeReadyMessage::_stepFunc(CustomDataInput *input) {
    this->step = input->readVarUhShort();
    if (this->step < 0) {

    }
}
