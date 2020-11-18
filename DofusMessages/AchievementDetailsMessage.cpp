#include "AchievementDetailsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementDetailsMessage::deserialize(CustomDataInput *input) {
    this->achievement.deserialize(input);
}