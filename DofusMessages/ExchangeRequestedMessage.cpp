#include "ExchangeRequestedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeRequestedMessage::deserialize(CustomDataInput *input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeRequestedMessage::_exchangeTypeFunc(CustomDataInput *input) {
    this->exchangeType = input->readByte();
}
