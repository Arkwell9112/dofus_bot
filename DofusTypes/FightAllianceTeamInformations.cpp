#include "FightTeamInformations.h"
#include "FightAllianceTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightAllianceTeamInformations::deserialize(CustomDataInput *input) {
    FightTeamInformations::deserialize(input);
    this->_relationFunc(input);
}

void FightAllianceTeamInformations::_relationFunc(CustomDataInput *input) {
    this->relation = input->readByte();
    if (this->relation < 0) {

    }
}
