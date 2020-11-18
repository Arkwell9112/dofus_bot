#include "HouseInstanceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseInstanceInformations::deserialize(CustomDataInput *input) {
    this->deserializeByteBoxes(input);
    this->_instanceIdFunc(input);
    this->_ownerNameFunc(input);
    this->_priceFunc(input);
}

void HouseInstanceInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->secondHand = BooleanByteWrapper::getFlag(_box0, 0);
    this->isLocked = BooleanByteWrapper::getFlag(_box0, 1);
    this->isSaleLocked = BooleanByteWrapper::getFlag(_box0, 2);
}

void HouseInstanceInformations::_instanceIdFunc(CustomDataInput *input) {
    this->instanceId = input->readInt();
    if (this->instanceId < 0) {

    }
}

void HouseInstanceInformations::_ownerNameFunc(CustomDataInput *input) {
    this->ownerName = input->readUTF();
}

void HouseInstanceInformations::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarLong();
    if (this->price < -9007199254740990 || this->price > 9007199254740990) {

    }
}
