#ifndef MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSWITHCOORDSMESSAGE_H

#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapComplementaryInformationsWithCoordsMessage : public MapComplementaryInformationsDataMessage {
public:
    int worldX = 0;
    int worldY = 0;

    void deserialize(CustomDataInput *input);

private:
    void _worldXFunc(CustomDataInput *input);

    void _worldYFunc(CustomDataInput *input);
};

#endif