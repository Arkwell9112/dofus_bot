#include "FightTeamMemberWithAllianceCharacterInformations.h"
#include "FightTeamMemberCharacterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamMemberWithAllianceCharacterInformations::deserialize(CustomDataInput *input) {
    FightTeamMemberCharacterInformations::deserialize(input);
    this->allianceInfos.deserialize(input);
}