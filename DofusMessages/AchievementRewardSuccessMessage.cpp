#include "AchievementRewardSuccessMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementRewardSuccessMessage::deserialize(CustomDataInput *input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardSuccessMessage::_achievementIdFunc(CustomDataInput *input) {
    this->achievementId = input->readShort();
}
