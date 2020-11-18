#ifndef FIGHTTEAMLIGHTINFORMATIONS_H
#define FIGHTTEAMLIGHTINFORMATIONS_H

#include "GuildMember.h"
#include "FightTeamInformations.h"
#include "AbstractFightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamLightInformations : public AbstractFightTeamInformations {
public:
    unsigned int teamMembersCount = 0;
    unsigned int meanLevel = 0;
    bool hasFriend = false;
    bool hasGuildMember = false;
    bool hasAllianceMember = false;
    bool hasGroupMember = false;
    bool hasMyTaxCollector = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);

    void _teamMembersCountFunc(CustomDataInput *input);

    void _meanLevelFunc(CustomDataInput *input);
};

#endif