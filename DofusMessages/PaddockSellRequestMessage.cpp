#include "PaddockSellRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockSellRequestMessage::deserialize(CustomDataInput *input) {
    this->_priceFunc(input);
    this->_forSaleFunc(input);
}

void PaddockSellRequestMessage::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}

void PaddockSellRequestMessage::_forSaleFunc(CustomDataInput *input) {
    this->forSale = input->readBoolean();
}
