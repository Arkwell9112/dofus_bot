#ifndef ATLASPOINTSINFORMATIONS_H
#define ATLASPOINTSINFORMATIONS_H

#include "MapCoordinatesExtended.h"
#include "MapCoordinates.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AtlasPointsInformations : public DeserializeInterface {
public:
    unsigned int type = 0;
    std::vector<MapCoordinatesExtended> coords;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif