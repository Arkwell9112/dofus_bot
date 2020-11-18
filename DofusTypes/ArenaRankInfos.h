#ifndef ARENARANKINFOS_H
#define ARENARANKINFOS_H

#include "ArenaRanking.h"
#include "ArenaLeagueRanking.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ArenaRankInfos : public DeserializeInterface {
public:
    ArenaRanking ranking;
    ArenaLeagueRanking leagueRanking;
    unsigned int victoryCount = 0;
    unsigned int fightcount = 0;
    unsigned int numFightNeededForLadder = 0;

    void deserialize(CustomDataInput *input);

private:
    void _victoryCountFunc(CustomDataInput *input);

    void _fightcountFunc(CustomDataInput *input);

    void _numFightNeededForLadderFunc(CustomDataInput *input);
};

#endif