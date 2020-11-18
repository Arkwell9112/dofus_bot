#ifndef ACHIEVEMENTLISTMESSAGE_H
#define ACHIEVEMENTLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/AchievementAchieved.h"

#include "../DofusTypes/Achievement.h"

#include <string>
#include <vector>

class AchievementListMessage : public DeserializeInterface {
public:
    std::vector<AchievementAchieved> finishedAchievements;

    void deserialize(CustomDataInput *input);

private:
    void _finishedAchievementsFunc(CustomDataInput *input);
};

#endif