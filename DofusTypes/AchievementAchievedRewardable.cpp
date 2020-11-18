#include "AchievementAchievedRewardable.h"
#include "AchievementAchieved.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AchievementAchievedRewardable::deserialize(CustomDataInput *input) {
    AchievementAchieved::deserialize(input);
    this->_finishedlevelFunc(input);
}

void AchievementAchievedRewardable::_finishedlevelFunc(CustomDataInput *input) {
    this->finishedlevel = input->readVarUhShort();
    if (this->finishedlevel < 0 || this->finishedlevel > 200) {

    }
}
