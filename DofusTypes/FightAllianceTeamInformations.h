#ifndef FIGHTALLIANCETEAMINFORMATIONS_H
#define FIGHTALLIANCETEAMINFORMATIONS_H

#include "FightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightAllianceTeamInformations : public FightTeamInformations {
public:
    unsigned int relation = 0;

    void deserialize(CustomDataInput *input);

private:
    void _relationFunc(CustomDataInput *input);
};

#endif