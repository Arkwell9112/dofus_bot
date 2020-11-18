#include "HouseBuyResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseBuyResultMessage::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_houseIdFunc(input);
    this->_instanceIdFunc(input);
    this->_realPriceFunc(input);
}

void HouseBuyResultMessage::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 0);
    this->bought = BooleanByteWrapper::getFlag(_box0, 1);
}

void HouseBuyResultMessage::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseBuyResultMessage::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseBuyResultMessage::_realPriceFunc(CustomDataInput *input) {
    this->realPrice = input->readVarUhLong();
    if (this->realPrice < 0 || this->realPrice > 9007199254740990) {

    }
}
