#include "PaddockSellBuyDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockSellBuyDialogMessage::deserialize(CustomDataInput *input) {
    this->_bsellFunc(input);
    this->_ownerIdFunc(input);
    this->_priceFunc(input);
}

void PaddockSellBuyDialogMessage::_bsellFunc(CustomDataInput *input) {
    this->bsell = input->readBoolean();
}

void PaddockSellBuyDialogMessage::_ownerIdFunc(CustomDataInput *input) {
    this->ownerId = input->readVarUhInt();
    if (this->ownerId < 0) {

    }
}

void PaddockSellBuyDialogMessage::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
