#ifndef MAPFIGHTSTARTPOSITIONSUPDATEMESSAGE_H
#define MAPFIGHTSTARTPOSITIONSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FightStartingPositions.h"

#include <string>
#include <vector>

class MapFightStartPositionsUpdateMessage : public DeserializeInterface {
public:
    double mapId = 0;
    FightStartingPositions fightStartPositions;

    void deserialize(CustomDataInput *input);

private:
    void _mapIdFunc(CustomDataInput *input);
};

#endif