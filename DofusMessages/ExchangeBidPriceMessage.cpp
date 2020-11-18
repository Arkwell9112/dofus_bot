#include "ExchangeBidPriceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidPriceMessage::deserialize(CustomDataInput *input) {
    this->_genericIdFunc(input);
    this->_averagePriceFunc(input);
}

void ExchangeBidPriceMessage::_genericIdFunc(CustomDataInput *input) {
    this->genericId = input->readVarUhShort();
    if (this->genericId < 0) {

    }
}

void ExchangeBidPriceMessage::_averagePriceFunc(CustomDataInput *input) {
    this->averagePrice = input->readVarLong();
    if (this->averagePrice < -9007199254740990 || this->averagePrice > 9007199254740990) {

    }
}
