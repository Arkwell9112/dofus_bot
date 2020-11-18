#ifndef MAPCOORDINATESEXTENDED_H
#define MAPCOORDINATESEXTENDED_H

#include "MapCoordinatesAndId.h"
#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapCoordinatesExtended : public MapCoordinatesAndId {
public:
    unsigned int subAreaId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _subAreaIdFunc(CustomDataInput *input);
};

#endif