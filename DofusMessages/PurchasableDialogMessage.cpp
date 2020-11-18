#include "PurchasableDialogMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PurchasableDialogMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_purchasableIdFunc(input);
    this->_purchasableInstanceIdFunc(input);
    this->_priceFunc(input);
}

void PurchasableDialogMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->buyOrSell = BooleanByteWrapper::getFlag(_box0, 0);
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 1);
}

void PurchasableDialogMessage::_purchasableIdFunc(CustomDataInput *input) {
    this->purchasableId = input->readDouble();
    if (this->purchasableId < 0 || this->purchasableId > 9007199254740990) {

    }
}

void PurchasableDialogMessage::_purchasableInstanceIdFunc(CustomDataInput *input) {
    this->purchasableInstanceId = input->readInt();
    if (this->purchasableInstanceId < 0) {

    }
}

void PurchasableDialogMessage::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
