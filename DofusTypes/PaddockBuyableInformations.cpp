#include "PaddockBuyableInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockBuyableInformations::deserialize(CustomDataInput *input) {
    this->_priceFunc(input);
    this->_lockedFunc(input);
}

void PaddockBuyableInformations::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}

void PaddockBuyableInformations::_lockedFunc(CustomDataInput *input) {
    this->locked = input->readBoolean();
}
