#include "PaddockBuyResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockBuyResultMessage::deserialize(CustomDataInput *input) {
    this->_paddockIdFunc(input);
    this->_boughtFunc(input);
    this->_realPriceFunc(input);
}

void PaddockBuyResultMessage::_paddockIdFunc(CustomDataInput *input) {
    this->paddockId = input->readDouble();
    if (this->paddockId < 0 || this->paddockId > 9007199254740990) {

    }
}

void PaddockBuyResultMessage::_boughtFunc(CustomDataInput *input) {
    this->bought = input->readBoolean();
}

void PaddockBuyResultMessage::_realPriceFunc(CustomDataInput *input) {
    this->realPrice = input->readVarUhLong();
    if (this->realPrice < 0 || this->realPrice > 9007199254740990) {

    }
}
