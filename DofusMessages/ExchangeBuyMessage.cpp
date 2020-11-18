#include "ExchangeBuyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBuyMessage::deserialize(CustomDataInput *input) {
    this->_objectToBuyIdFunc(input);
    this->_quantityFunc(input);
}

void ExchangeBuyMessage::_objectToBuyIdFunc(CustomDataInput *input) {
    this->objectToBuyId = input->readVarUhInt();
    if (this->objectToBuyId < 0) {

    }
}

void ExchangeBuyMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhInt();
    if (this->quantity < 0) {

    }
}
