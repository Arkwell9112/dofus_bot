#include "GuildMember.h"
#include "FightTeamLightInformations.h"
#include "FightTeamInformations.h"
#include "AbstractFightTeamInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamLightInformations::deserialize(CustomDataInput *input) {
    AbstractFightTeamInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_teamMembersCountFunc(input);
    this->_meanLevelFunc(input);
}

void FightTeamLightInformations::deserializeByteBoxes(CustomDataInput *input) {
    unsigned int _box0 = input->readUnsignedByte();
    this->hasFriend = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasGuildMember = BooleanByteWrapper::getFlag(_box0, 1);
    this->hasAllianceMember = BooleanByteWrapper::getFlag(_box0, 2);
    this->hasGroupMember = BooleanByteWrapper::getFlag(_box0, 3);
    this->hasMyTaxCollector = BooleanByteWrapper::getFlag(_box0, 4);
}

void FightTeamLightInformations::_teamMembersCountFunc(CustomDataInput *input) {
    this->teamMembersCount = input->readByte();
    if (this->teamMembersCount < 0) {

    }
}

void FightTeamLightInformations::_meanLevelFunc(CustomDataInput *input) {
    this->meanLevel = input->readVarUhInt();
    if (this->meanLevel < 0) {

    }
}
