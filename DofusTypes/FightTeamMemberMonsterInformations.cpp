#include "FightTeamMemberMonsterInformations.h"
#include "FightTeamMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamMemberMonsterInformations::deserialize(CustomDataInput *input) {
    FightTeamMemberInformations::deserialize(input);
    this->_monsterIdFunc(input);
    this->_gradeFunc(input);
}

void FightTeamMemberMonsterInformations::_monsterIdFunc(CustomDataInput *input) {
    this->monsterId = input->readInt();
}

void FightTeamMemberMonsterInformations::_gradeFunc(CustomDataInput *input) {
    this->grade = input->readByte();
    if (this->grade < 0) {

    }
}
