#ifndef FRIENDINFORMATIONS_H
#define FRIENDINFORMATIONS_H

#include "AbstractContactInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FriendInformations : public AbstractContactInformations {
public:
    unsigned int playerState = 99;
    unsigned int lastConnection = 0;
    int achievementPoints = 0;
    int leagueId = 0;
    int ladderPosition = 0;

    void deserialize(CustomDataInput *input);

private:
    void _playerStateFunc(CustomDataInput *input);

    void _lastConnectionFunc(CustomDataInput *input);

    void _achievementPointsFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);
};

#endif