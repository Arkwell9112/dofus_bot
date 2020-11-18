#include "AchievementStartedObjective.h"
#include "AchievementObjective.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AchievementStartedObjective::deserialize(CustomDataInput *input) {
    AchievementObjective::deserialize(input);
    this->_valueFunc(input);
}

void AchievementStartedObjective::_valueFunc(CustomDataInput *input) {
    this->value = input->readVarUhShort();
    if (this->value < 0) {

    }
}
