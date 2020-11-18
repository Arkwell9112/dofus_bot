#ifndef MAPOBSTACLEUPDATEMESSAGE_H
#define MAPOBSTACLEUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MapObstacle.h"

#include <string>
#include <vector>

class MapObstacleUpdateMessage : public DeserializeInterface {
public:
    std::vector<MapObstacle> obstacles;

    void deserialize(CustomDataInput *input);

private:
};

#endif