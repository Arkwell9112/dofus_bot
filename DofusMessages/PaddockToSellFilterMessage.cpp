#include "PaddockToSellFilterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PaddockToSellFilterMessage::deserialize(CustomDataInput *input) {
    this->_areaIdFunc(input);
    this->_atLeastNbMountFunc(input);
    this->_atLeastNbMachineFunc(input);
    this->_maxPriceFunc(input);
    this->_orderByFunc(input);
}

void PaddockToSellFilterMessage::_areaIdFunc(CustomDataInput *input) {
    this->areaId = input->readInt();
}

void PaddockToSellFilterMessage::_atLeastNbMountFunc(CustomDataInput *input) {
    this->atLeastNbMount = input->readByte();
}

void PaddockToSellFilterMessage::_atLeastNbMachineFunc(CustomDataInput *input) {
    this->atLeastNbMachine = input->readByte();
}

void PaddockToSellFilterMessage::_maxPriceFunc(CustomDataInput *input) {
    this->maxPrice = input->readVarUhLong();
    if (this->maxPrice < 0 || this->maxPrice > 9007199254740990) {

    }
}

void PaddockToSellFilterMessage::_orderByFunc(CustomDataInput *input) {
    this->orderBy = input->readByte();
    if (this->orderBy < 0) {

    }
}
