#ifndef NAMEDPARTYTEAMWITHOUTCOME_H
#define NAMEDPARTYTEAMWITHOUTCOME_H

#include "NamedPartyTeam.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class NamedPartyTeamWithOutcome : public DeserializeInterface {
public:
    NamedPartyTeam team;
    unsigned int outcome = 0;

    void deserialize(CustomDataInput *input);

private:
    void _outcomeFunc(CustomDataInput *input);
};

#endif