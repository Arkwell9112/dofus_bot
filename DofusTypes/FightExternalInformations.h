#ifndef FIGHTEXTERNALINFORMATIONS_H
#define FIGHTEXTERNALINFORMATIONS_H

#include "FightTeamLightInformations.h"
#include "FightOptionsInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightExternalInformations : public DeserializeInterface {
public:
    unsigned int fightId = 0;
    unsigned int fightType = 0;
    unsigned int fightStart = 0;
    bool fightSpectatorLocked = false;
    std::vector<FightTeamLightInformations> fightTeams{FightTeamLightInformations(), FightTeamLightInformations()};
    std::vector<FightOptionsInformations> fightTeamsOptions{FightOptionsInformations(), FightOptionsInformations()};

    void deserialize(CustomDataInput *input);

private:
    void _fightIdFunc(CustomDataInput *input);

    void _fightTypeFunc(CustomDataInput *input);

    void _fightStartFunc(CustomDataInput *input);

    void _fightSpectatorLockedFunc(CustomDataInput *input);
};

#endif