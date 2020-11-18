#ifndef MAPCOMPLEMENTARYINFORMATIONSBREACHMESSAGE_H
#define MAPCOMPLEMENTARYINFORMATIONSBREACHMESSAGE_H

#include "MapComplementaryInformationsDataMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachBranch.h"

#include <string>
#include <vector>

class MapComplementaryInformationsBreachMessage : public MapComplementaryInformationsDataMessage {
public:
    unsigned int floor = 0;
    unsigned int room = 0;
    unsigned int infinityMode = 0;
    std::vector<BreachBranch> branches;

    void deserialize(CustomDataInput *input);

private:
    void _floorFunc(CustomDataInput *input);

    void _roomFunc(CustomDataInput *input);

    void _infinityModeFunc(CustomDataInput *input);

    void _branchesFunc(CustomDataInput *input);
};

#endif