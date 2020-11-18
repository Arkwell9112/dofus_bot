#ifndef ACHIEVEMENTFINISHEDMESSAGE_H
#define ACHIEVEMENTFINISHEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AchievementAchievedRewardable.h"

#include "../DofusTypes/AchievementAchieved.h"

#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementFinishedMessage : public DeserializeInterface {
public:
    AchievementAchievedRewardable achievement;

    void deserialize(CustomDataInput *input);

private:
};

#endif