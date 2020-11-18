#include "HouseSellingUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseSellingUpdateMessage::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_realPriceFunc(input);
    this->_buyerNameFunc(input);
}

void HouseSellingUpdateMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseSellingUpdateMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseSellingUpdateMessage::_secondHandFunc(CustomDataInput *input) {
    this->secondHand = input->readBoolean();
}

void HouseSellingUpdateMessage::_realPriceFunc(CustomDataInput *input) {
    this->realPrice = input->readVarUhLong();
    if (this->realPrice < 0 || this->realPrice > 9007199254740990) {

    }
}

void HouseSellingUpdateMessage::_buyerNameFunc(CustomDataInput *input) {
    this->buyerName = input->readUTF();
}
