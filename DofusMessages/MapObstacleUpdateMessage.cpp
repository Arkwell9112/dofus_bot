#include "MapObstacleUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MapObstacle.h"

void MapObstacleUpdateMessage::deserialize(CustomDataInput *input) {
    MapObstacle _item1;
    unsigned int _obstaclesLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _obstaclesLen; _i1++) {
        _item1.deserialize(input);
        this->obstacles.push_back(_item1);
    }
}