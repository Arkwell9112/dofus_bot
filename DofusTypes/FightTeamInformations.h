#ifndef FIGHTTEAMINFORMATIONS_H
#define FIGHTTEAMINFORMATIONS_H

#include "FightTeamMemberInformations.h"
#include "AbstractFightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamInformations : public AbstractFightTeamInformations {
public:
    std::vector<FightTeamMemberInformations> teamMembers;

    void deserialize(CustomDataInput *input);

private:
    void _teamMembersFunc(CustomDataInput *input);
};

#endif