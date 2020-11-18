#include "SkillActionDescriptionTimed.h"
#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SkillActionDescriptionTimed::deserialize(CustomDataInput *input) {
    SkillActionDescription::deserialize(input);
    this->_timeFunc(input);
}

void SkillActionDescriptionTimed::_timeFunc(CustomDataInput *input) {
    this->time = input->readUnsignedByte();
    if (this->time < 0 || this->time > 255) {

    }
}
