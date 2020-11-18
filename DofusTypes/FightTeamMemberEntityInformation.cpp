#include "FightTeamMemberInformations.h"
#include "FightTeamMemberEntityInformation.h"
#include "EntityInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTeamMemberEntityInformation::deserialize(CustomDataInput *input) {
    FightTeamMemberInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_levelFunc(input);
    this->_masterIdFunc(input);
}

void FightTeamMemberEntityInformation::_entityModelIdFunc(CustomDataInput *input) {
    this->entityModelId = input->readByte();
    if (this->entityModelId < 0) {

    }
}

void FightTeamMemberEntityInformation::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 1 || this->level > 200) {

    }
}

void FightTeamMemberEntityInformation::_masterIdFunc(CustomDataInput *input) {
    this->masterId = input->readDouble();
    if (this->masterId < -9007199254740990 || this->masterId > 9007199254740990) {

    }
}
