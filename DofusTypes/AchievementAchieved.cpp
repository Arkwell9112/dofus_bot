#include "AchievementAchieved.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AchievementAchieved::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_achievedByFunc(input);
}

void AchievementAchieved::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void AchievementAchieved::_achievedByFunc(CustomDataInput *input) {
    this->achievedBy = input->readVarUhLong();
    if (this->achievedBy < 0 || this->achievedBy > 9007199254740990) {

    }
}
