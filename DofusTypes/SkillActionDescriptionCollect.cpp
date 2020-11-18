#include "SkillActionDescriptionTimed.h"
#include "SkillActionDescriptionCollect.h"
#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SkillActionDescriptionCollect::deserialize(CustomDataInput *input) {
    SkillActionDescriptionTimed::deserialize(input);
    this->_minFunc(input);
    this->_maxFunc(input);
}

void SkillActionDescriptionCollect::_minFunc(CustomDataInput *input) {
    this->min = input->readVarUhShort();
    if (this->min < 0) {

    }
}

void SkillActionDescriptionCollect::_maxFunc(CustomDataInput *input) {
    this->max = input->readVarUhShort();
    if (this->max < 0) {

    }
}
