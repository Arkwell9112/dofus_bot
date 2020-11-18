#ifndef ACHIEVEMENTSTARTEDOBJECTIVE_H
#define ACHIEVEMENTSTARTEDOBJECTIVE_H

#include "AchievementObjective.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AchievementStartedObjective : public AchievementObjective {
public:
    unsigned int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _valueFunc(CustomDataInput *input);
};

#endif