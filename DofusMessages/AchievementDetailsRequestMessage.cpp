#include "AchievementDetailsRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementDetailsRequestMessage::deserialize(CustomDataInput *input) {
    this->_achievementIdFunc(input);
}

void AchievementDetailsRequestMessage::_achievementIdFunc(CustomDataInput *input) {
    this->achievementId = input->readVarUhShort();
    if (this->achievementId < 0) {

    }
}
