#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SkillActionDescription::deserialize(CustomDataInput *input) {
    this->_skillIdFunc(input);
}

void SkillActionDescription::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhShort();
    if (this->skillId < 0) {

    }
}
