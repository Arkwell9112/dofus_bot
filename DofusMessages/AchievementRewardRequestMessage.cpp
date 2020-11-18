#include "AchievementRewardRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementRewardRequestMessage::deserialize(CustomDataInput *input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardRequestMessage::_achievementIdFunc(CustomDataInput *input) {
    this->achievementId = input->readShort();
}
