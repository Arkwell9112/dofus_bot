#include "HumanOptionSkillUse.h"
#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HumanOptionSkillUse::deserialize(CustomDataInput *input) {
    HumanOption::deserialize(input);
    this->_elementIdFunc(input);
    this->_skillIdFunc(input);
    this->_skillEndTimeFunc(input);
}

void HumanOptionSkillUse::_elementIdFunc(CustomDataInput *input) {
    this->elementId = input->readVarUhInt();
    if (this->elementId < 0) {

    }
}

void HumanOptionSkillUse::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhShort();
    if (this->skillId < 0) {

    }
}

void HumanOptionSkillUse::_skillEndTimeFunc(CustomDataInput *input) {
    this->skillEndTime = input->readDouble();
    if (this->skillEndTime < -9007199254740990 || this->skillEndTime > 9007199254740990) {

    }
}
