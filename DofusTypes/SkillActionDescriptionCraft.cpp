#include "SkillActionDescriptionCraft.h"
#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SkillActionDescriptionCraft::deserialize(CustomDataInput *input) {
    SkillActionDescription::deserialize(input);
    this->_probabilityFunc(input);
}

void SkillActionDescriptionCraft::_probabilityFunc(CustomDataInput *input) {
    this->probability = input->readByte();
    if (this->probability < 0) {

    }
}
