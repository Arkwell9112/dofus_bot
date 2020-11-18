#include "MapObstacle.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MapObstacle::deserialize(CustomDataInput *input) {
    this->_obstacleCellIdFunc(input);
    this->_stateFunc(input);
}

void MapObstacle::_obstacleCellIdFunc(CustomDataInput *input) {
    this->obstacleCellId = input->readVarUhShort();
    if (this->obstacleCellId < 0 || this->obstacleCellId > 559) {

    }
}

void MapObstacle::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}
