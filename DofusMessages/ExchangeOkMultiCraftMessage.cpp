#include "ExchangeOkMultiCraftMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeOkMultiCraftMessage::deserialize(CustomDataInput *input) {
    this->_initiatorIdFunc(input);
    this->_otherIdFunc(input);
    this->_roleFunc(input);
}

void ExchangeOkMultiCraftMessage::_initiatorIdFunc(CustomDataInput *input) {
    this->initiatorId = input->readVarUhLong();
    if (this->initiatorId < 0 || this->initiatorId > 9007199254740990) {

    }
}

void ExchangeOkMultiCraftMessage::_otherIdFunc(CustomDataInput *input) {
    this->otherId = input->readVarUhLong();
    if (this->otherId < 0 || this->otherId > 9007199254740990) {

    }
}

void ExchangeOkMultiCraftMessage::_roleFunc(CustomDataInput *input) {
    this->role = input->readByte();
}
