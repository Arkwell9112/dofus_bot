#include "AchievementRewardErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementRewardErrorMessage::deserialize(CustomDataInput *input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardErrorMessage::_achievementIdFunc(CustomDataInput *input) {
    this->achievementId = input->readShort();
}
