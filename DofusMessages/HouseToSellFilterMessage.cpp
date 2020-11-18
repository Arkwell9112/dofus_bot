#include "HouseToSellFilterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseToSellFilterMessage::deserialize(CustomDataInput *input) {
    this->_areaIdFunc(input);
    this->_atLeastNbRoomFunc(input);
    this->_atLeastNbChestFunc(input);
    this->_skillRequestedFunc(input);
    this->_maxPriceFunc(input);
    this->_orderByFunc(input);
}

void HouseToSellFilterMessage::_areaIdFunc(CustomDataInput *input) {
    this->areaId = input->readInt();
}

void HouseToSellFilterMessage::_atLeastNbRoomFunc(CustomDataInput *input) {
    this->atLeastNbRoom = input->readByte();
    if (this->atLeastNbRoom < 0) {

    }
}

void HouseToSellFilterMessage::_atLeastNbChestFunc(CustomDataInput *input) {
    this->atLeastNbChest = input->readByte();
    if (this->atLeastNbChest < 0) {

    }
}

void HouseToSellFilterMessage::_skillRequestedFunc(CustomDataInput *input) {
    this->skillRequested = input->readVarUhShort();
    if (this->skillRequested < 0) {

    }
}

void HouseToSellFilterMessage::_maxPriceFunc(CustomDataInput *input) {
    this->maxPrice = input->readVarUhLong();
    if (this->maxPrice < 0 || this->maxPrice > 9007199254740990) {

    }
}

void HouseToSellFilterMessage::_orderByFunc(CustomDataInput *input) {
    this->orderBy = input->readByte();
    if (this->orderBy < 0) {

    }
}
