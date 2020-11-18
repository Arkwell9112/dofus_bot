#include "MapFightStartPositionsUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapFightStartPositionsUpdateMessage::deserialize(CustomDataInput *input) {
    this->_mapIdFunc(input);
    this->fightStartPositions.deserialize(input);
}

void MapFightStartPositionsUpdateMessage::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
