#ifndef LEAGUEFRIENDINFORMATIONS_H
#define LEAGUEFRIENDINFORMATIONS_H

#include "FriendInformations.h"
#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LeagueFriendInformations : public AbstractContactInformations {
public:
    double playerId = 0;
    std::string playerName;
    int breed = 0;
    bool sex = false;
    unsigned int level = 0;
    int leagueId = 0;
    int totalLeaguePoints = 0;
    int ladderPosition = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerIdFunc(CustomDataInput *input);

    void _playerNameFunc(CustomDataInput *input);

    void _breedFunc(CustomDataInput *input);

    void _sexFunc(CustomDataInput *input);

    void _levelFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _totalLeaguePointsFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);
};

#endif