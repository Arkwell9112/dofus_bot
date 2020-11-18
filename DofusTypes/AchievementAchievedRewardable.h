#ifndef ACHIEVEMENTACHIEVEDREWARDABLE_H
#define ACHIEVEMENTACHIEVEDREWARDABLE_H

#include "AchievementAchieved.h"
#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AchievementAchievedRewardable : public AchievementAchieved {
public:
    unsigned int finishedlevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _finishedlevelFunc(CustomDataInput *input);
};

#endif