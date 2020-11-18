#ifndef MAPCOORDINATESANDID_H
#define MAPCOORDINATESANDID_H

#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapCoordinatesAndId : public MapCoordinates {
public:
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif