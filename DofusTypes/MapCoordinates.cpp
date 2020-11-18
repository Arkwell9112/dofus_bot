#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapCoordinates::deserialize(CustomDataInput *input) {
    this->_worldXFunc(input);
    this->_worldYFunc(input);
}

void MapCoordinates::_worldXFunc(CustomDataInput *input) {
    this->worldX = input->readShort();
    if (this->worldX < -255 || this->worldX > 255) {

    }
}

void MapCoordinates::_worldYFunc(CustomDataInput *input) {
    this->worldY = input->readShort();
    if (this->worldY < -255 || this->worldY > 255) {

    }
}
