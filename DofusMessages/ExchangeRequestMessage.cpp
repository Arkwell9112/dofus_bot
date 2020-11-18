#include "ExchangeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeRequestMessage::deserialize(CustomDataInput *input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeRequestMessage::_exchangeTypeFunc(CustomDataInput *input) {
    this->exchangeType = input->readByte();
}
