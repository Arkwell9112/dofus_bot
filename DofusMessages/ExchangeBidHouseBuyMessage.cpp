#include "ExchangeBidHouseBuyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHouseBuyMessage::deserialize(CustomDataInput *input) {
    this->_uidFunc(input);
    this->_qtyFunc(input);
    this->_priceFunc(input);
}

void ExchangeBidHouseBuyMessage::_uidFunc(CustomDataInput *input) {
    this->uid = input->readVarUhInt();
    if (this->uid < 0) {

    }
}

void ExchangeBidHouseBuyMessage::_qtyFunc(CustomDataInput *input) {
    this->qty = input->readVarUhInt();
    if (this->qty < 0) {

    }
}

void ExchangeBidHouseBuyMessage::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
