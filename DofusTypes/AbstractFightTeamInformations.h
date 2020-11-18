#ifndef ABSTRACTFIGHTTEAMINFORMATIONS_H
#define ABSTRACTFIGHTTEAMINFORMATIONS_H

#include "FightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AbstractFightTeamInformations : public DeserializeInterface {
public:
    unsigned int teamId = 2;
    double leaderId = 0;
    int teamSide = 0;
    unsigned int teamTypeId = 0;
    unsigned int nbWaves = 0;

    void deserialize(CustomDataInput *input);

private:
    void _teamIdFunc(CustomDataInput *input);

    void _leaderIdFunc(CustomDataInput *input);

    void _teamSideFunc(CustomDataInput *input);

    void _teamTypeIdFunc(CustomDataInput *input);

    void _nbWavesFunc(CustomDataInput *input);
};

#endif