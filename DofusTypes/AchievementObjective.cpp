#include "AchievementObjective.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AchievementObjective::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_maxValueFunc(input);
}

void AchievementObjective::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhInt();
    if (this->id < 0) {

    }
}

void AchievementObjective::_maxValueFunc(CustomDataInput *input) {
    this->maxValue = input->readVarUhShort();
    if (this->maxValue < 0) {

    }
}
