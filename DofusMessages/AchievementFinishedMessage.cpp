#include "AchievementFinishedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void AchievementFinishedMessage::deserialize(CustomDataInput *input) {
    this->achievement.deserialize(input);
}