#ifndef GAMEFIGHTSPECTATORJOINMESSAGE_H
#define GAMEFIGHTSPECTATORJOINMESSAGE_H

#include "GameFightJoinMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/NamedPartyTeam.h"

#include <string>
#include <vector>

class GameFightSpectatorJoinMessage : public GameFightJoinMessage {
public:
    std::vector<NamedPartyTeam> namedPartyTeams;

    void deserialize(CustomDataInput *input);

private:
};

#endif