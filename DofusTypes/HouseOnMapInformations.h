#ifndef HOUSEONMAPINFORMATIONS_H
#define HOUSEONMAPINFORMATIONS_H

#include "HouseInstanceInformations.h"
#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseOnMapInformations : public HouseInformations {
public:
    std::vector<unsigned int> doorsOnMap;
    std::vector<HouseInstanceInformations> houseInstances;

    void deserialize(CustomDataInput *input);

private:
    void _doorsOnMapFunc(CustomDataInput *input);
};

#endif