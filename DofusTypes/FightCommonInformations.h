#ifndef FIGHTCOMMONINFORMATIONS_H
#define FIGHTCOMMONINFORMATIONS_H

#include "FightTeamInformations.h"
#include "FightOptionsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightCommonInformations : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    unsigned int fightType = 0;
    std::vector<FightTeamInformations> fightTeams;
    std::vector<unsigned int> fightTeamsPositions;
    std::vector<FightOptionsInformations> fightTeamsOptions;

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _fightTypeFunc(CustomDataInput *input);

    void _fightTeamsFunc(CustomDataInput *input);

    void _fightTeamsPositionsFunc(CustomDataInput *input);
};

#endif