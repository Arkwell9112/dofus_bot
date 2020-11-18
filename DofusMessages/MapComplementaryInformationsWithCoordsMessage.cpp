#include "MapComplementaryInformationsWithCoordsMessage.h"
#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapComplementaryInformationsWithCoordsMessage::deserialize(CustomDataInput *input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void MapComplementaryInformationsWithCoordsMessage::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void MapComplementaryInformationsWithCoordsMessage::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}
