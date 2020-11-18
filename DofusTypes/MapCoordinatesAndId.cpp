#include "MapCoordinatesAndId.h"
#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapCoordinatesAndId::deserialize(CustomDataInput *input) {
    MapCoordinates::deserialize(input);
    this->_mapIdFunc(input);
}

void MapCoordinatesAndId::_mapIdFunc(CustomDataInput *input) {
    this->mapId = input->readDouble();
    if (this->mapId < 0 || this->mapId > 9007199254740990) {

    }
}
