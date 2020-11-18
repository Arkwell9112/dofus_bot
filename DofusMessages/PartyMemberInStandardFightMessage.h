#ifndef PARTYMEMBERINSTANDARDFIGHTMESSAGE_H
#define PARTYMEMBERINSTANDARDFIGHTMESSAGE_H

#include "AbstractPartyMemberInFightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/MapCoordinatesExtended.h"

#include "../DofusTypes/MapCoordinates.h"

#include <string>
#include <vector>

class PartyMemberInStandardFightMessage : public AbstractPartyMemberInFightMessage {
public:
    MapCoordinatesExtended fightMap;

    void deserialize(CustomDataInput *input);

private:
};

#endif