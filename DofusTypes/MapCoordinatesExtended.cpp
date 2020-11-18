#include "MapCoordinatesExtended.h"
#include "MapCoordinatesAndId.h"
#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapCoordinatesExtended::deserialize(CustomDataInput *input) {
    MapCoordinatesAndId::deserialize(input);
    this->_subAreaIdFunc(input);
}

void MapCoordinatesExtended::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}
