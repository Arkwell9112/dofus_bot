#include "ExchangeMoneyMovementInformationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMoneyMovementInformationMessage::deserialize(CustomDataInput *input) {
    this->_limitFunc(input);
}

void ExchangeMoneyMovementInformationMessage::_limitFunc(CustomDataInput *input) {
    this->limit = input->readVarUhLong();
    if (this->limit < 0 || this->limit > 9007199254740990) {

    }
}
