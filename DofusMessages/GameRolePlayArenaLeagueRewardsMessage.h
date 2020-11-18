#ifndef GAMEROLEPLAYARENALEAGUEREWARDSMESSAGE_H
#define GAMEROLEPLAYARENALEAGUEREWARDSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameRolePlayArenaLeagueRewardsMessage : public DeserializeInterface {
public:
    unsigned int seasonId = 0;
    unsigned int leagueId = 0;
    int ladderPosition = 0;
    bool endSeasonReward = false;

    void deserialize(CustomDataInput *input);

private:
    void _seasonIdFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);

    void _endSeasonRewardFunc(CustomDataInput *input);
};

#endif