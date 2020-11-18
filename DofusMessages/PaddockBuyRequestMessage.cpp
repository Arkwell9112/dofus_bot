#include "PaddockBuyRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockBuyRequestMessage::deserialize(CustomDataInput *input) {
    this->_proposedPriceFunc(input);
}

void PaddockBuyRequestMessage::_proposedPriceFunc(CustomDataInput *input) {
    this->proposedPrice = input->readVarUhLong();
    if (this->proposedPrice < 0 || this->proposedPrice > 9007199254740990) {

    }
}
