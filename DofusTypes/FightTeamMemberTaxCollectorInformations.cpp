#include "TaxCollectorInformations.h"
#include "FightTeamMemberTaxCollectorInformations.h"
#include "FightTeamMemberInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamMemberTaxCollectorInformations::deserialize(CustomDataInput *input) {
    FightTeamMemberInformations::deserialize(input);
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->_levelFunc(input);
    this->_guildIdFunc(input);
    this->_uidFunc(input);
}

void FightTeamMemberTaxCollectorInformations::_firstNameIdFunc(CustomDataInput *input) {
    this->firstNameId = input->readVarUhShort();
    if (this->firstNameId < 0) {

    }
}

void FightTeamMemberTaxCollectorInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}

void FightTeamMemberTaxCollectorInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readUnsignedByte();
    if (this->level < 1 || this->level > 200) {

    }
}

void FightTeamMemberTaxCollectorInformations::_guildIdFunc(CustomDataInput *input) {
    this->guildId = input->readVarUhInt();
    if (this->guildId < 0) {

    }
}

void FightTeamMemberTaxCollectorInformations::_uidFunc(CustomDataInput *input) {
    this->uid = input->readDouble();
    if (this->uid < 0 || this->uid > 9007199254740990) {

    }
}
