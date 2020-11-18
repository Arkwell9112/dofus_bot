#ifndef ARENALEAGUERANKING_H
#define ARENALEAGUERANKING_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ArenaLeagueRanking : public DeserializeInterface {
public:
    unsigned int rank = 0;
    unsigned int leagueId = 0;
    int leaguePoints = 0;
    int totalLeaguePoints = 0;
    int ladderPosition = 0;

    void deserialize(CustomDataInput *input);

private:
    void _rankFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _leaguePointsFunc(CustomDataInput *input);

    void _totalLeaguePointsFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);
};

#endif