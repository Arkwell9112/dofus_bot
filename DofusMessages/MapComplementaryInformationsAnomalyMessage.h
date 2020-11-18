#ifndef MAPCOMPLEMENTARYINFORMATIONSANOMALYMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSANOMALYMESSAGE_H

#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MapComplementaryInformationsAnomalyMessage : public MapComplementaryInformationsDataMessage {
public:
    unsigned int level = 0;
    double closingTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _levelFunc(CustomDataInput *input);

    void _closingTimeFunc(CustomDataInput *input);
};

#endif