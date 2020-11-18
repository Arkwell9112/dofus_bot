#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHOUSEMESSAGE_H

#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/HouseInformationsInside.h"

#include "../DofusTypes/HouseInformations.h"

#include <string>
#include <vector>

class MapComplementaryInformationsDataInHouseMessage : public MapComplementaryInformationsDataMessage {
public:
    HouseInformationsInside currentHouse;

    void deserialize(CustomDataInput *input);

private:
};

#endif