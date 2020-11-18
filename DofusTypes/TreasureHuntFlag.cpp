#include "TreasureHuntFlag.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntFlag::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
    this->_stateFunc(input);
}

void TreasureHuntFlag::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}

void TreasureHuntFlag::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}
