#ifndef GAMEFIGHTFIGHTERNAMEDINFORMATIONS_H
#define GAMEFIGHTFIGHTERNAMEDINFORMATIONS_H

#include "PlayerStatus.h"
#include "GameFightFighterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameFightFighterNamedInformations : public GameFightFighterInformations {
public:
    std::string name;
    PlayerStatus status;
    int leagueId = 0;
    int ladderPosition = 0;
    bool hiddenInPrefight = false;

    void deserialize(CustomDataInput *input);

private:
    void _nameFunc(CustomDataInput *input);

    void _leagueIdFunc(CustomDataInput *input);

    void _ladderPositionFunc(CustomDataInput *input);

    void _hiddenInPrefightFunc(CustomDataInput *input);
};

#endif