#include "ExchangeStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartedMessage::deserialize(CustomDataInput *input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeStartedMessage::_exchangeTypeFunc(CustomDataInput *input) {
    this->exchangeType = input->readByte();
}
