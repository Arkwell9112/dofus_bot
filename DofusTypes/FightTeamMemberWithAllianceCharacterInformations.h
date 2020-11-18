#ifndef FIGHTTEAMMEMBERWITHALLIANCECHARACTERINFORMATIONS_H
#define FIGHTTEAMMEMBERWITHALLIANCECHARACTERINFORMATIONS_H

#include "FightTeamMemberCharacterInformations.h"
#include "BasicAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTeamMemberWithAllianceCharacterInformations : public FightTeamMemberCharacterInformations {
public:
    BasicAllianceInformations allianceInfos;

    void deserialize(CustomDataInput *input);

private:
};

#endif