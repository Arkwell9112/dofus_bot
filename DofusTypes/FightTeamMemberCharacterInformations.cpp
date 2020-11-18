#include "FightTeamMemberInformations.h"
#include "FightTeamMemberCharacterInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamMemberCharacterInformations::deserialize(CustomDataInput *input) {
    FightTeamMemberInformations::deserialize(input);
    this->_nameFunc(input);
    this->_levelFunc(input);
}

void FightTeamMemberCharacterInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void FightTeamMemberCharacterInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}
