#include "MapCoordinatesExtended.h"
#include "MapCoordinates.h"
#include "AtlasPointsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AtlasPointsInformations::deserialize(CustomDataInput *input) {
    MapCoordinatesExtended _item2;
    this->_typeFunc(input);
    unsigned int _coordsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _coordsLen; _i2++) {
        _item2.deserialize(input);
        this->coords.push_back(_item2);
    }
}

void AtlasPointsInformations::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
