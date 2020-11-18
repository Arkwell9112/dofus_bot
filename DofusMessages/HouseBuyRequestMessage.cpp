#include "HouseBuyRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseBuyRequestMessage::deserialize(CustomDataInput *input) {
    this->_proposedPriceFunc(input);
}

void HouseBuyRequestMessage::_proposedPriceFunc(CustomDataInput *input) {
    this->proposedPrice = input->readVarUhLong();
    if (this->proposedPrice < 0 || this->proposedPrice > 9007199254740990) {

    }
}
