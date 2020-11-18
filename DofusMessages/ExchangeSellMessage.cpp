#include "ExchangeSellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeSellMessage::deserialize(CustomDataInput *input) {
    this->_objectToSellIdFunc(input);
    this->_quantityFunc(input);
}

void ExchangeSellMessage::_objectToSellIdFunc(CustomDataInput *input) {
    this->objectToSellId = input->readVarUhInt();
    if (this->objectToSellId < 0) {

    }
}

void ExchangeSellMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
