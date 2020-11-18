#include "ExchangeCraftPaymentModifiedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftPaymentModifiedMessage::deserialize(CustomDataInput *input) {
    this->_goldSumFunc(input);
}

void ExchangeCraftPaymentModifiedMessage::_goldSumFunc(CustomDataInput *input) {
    this->goldSum = input->readVarUhLong();
    if (this->goldSum < 0 || this->goldSum > 9007199254740990) {

    }
}
