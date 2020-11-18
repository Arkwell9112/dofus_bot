#ifndef GAMEFIGHTENDMESSAGE_H
#define GAMEFIGHTENDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/NamedPartyTeamWithOutcome.h"

#include "../DofusTypes/NamedPartyTeam.h"

#include "../DofusTypes/FightResultListEntry.h"

#include <string>
#include <vector>

class GameFightEndMessage : public DeserializeInterface {
public:
    unsigned int duration = 0;
    int rewardRate = 0;
    int lootShareLimitMalus = 0;
    std::vector<FightResultListEntry> results;
    std::vector<NamedPartyTeamWithOutcome> namedPartyTeamsOutcomes;

    void deserialize(CustomDataInput *input);

private:
    void _durationFunc(CustomDataInput *input);

    void _rewardRateFunc(CustomDataInput *input);

    void _lootShareLimitMalusFunc(CustomDataInput *input);

    void _resultsFunc(CustomDataInput *input);
};

#endif