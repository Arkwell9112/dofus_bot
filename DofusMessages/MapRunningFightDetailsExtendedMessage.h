#ifndef MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE_H
#define MAPRUNNINGFIGHTDETAILSEXTENDEDMESSAGE_H

#include "MapRunningFightDetailsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/NamedPartyTeam.h"

#include <string>
#include <vector>

class MapRunningFightDetailsExtendedMessage : public MapRunningFightDetailsMessage {
public:
    std::vector<NamedPartyTeam> namedPartyTeams;

    void deserialize(CustomDataInput *input);

private:
};

#endif