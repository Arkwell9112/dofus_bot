#include "HouseSellRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseSellRequestMessage::deserialize(CustomDataInput *input) {
    this->_instanceIdFunc(input);
    this->_amountFunc(input);
    this->_forSaleFunc(input);
}

void HouseSellRequestMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseSellRequestMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhLong();
    if (this->amount < 0 || this->amount > 9007199254740990) {

    }
}

void HouseSellRequestMessage::_forSaleFunc(CustomDataInput *input) {
    this->forSale = input->readBoolean();
}
