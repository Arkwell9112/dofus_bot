#ifndef GAMEFIGHTUPDATETEAMMESSAGE_H
#define GAMEFIGHTUPDATETEAMMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/FightTeamInformations.h"

#include <string>
#include <vector>

class GameFightUpdateTeamMessage : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    FightTeamInformations team;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);
};

#endif