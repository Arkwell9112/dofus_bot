#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H

#include "AchievementStartedObjective.h"
#include "AchievementObjective.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class Achievement : public DeserializeInterface {
public:
    unsigned int id = 0;
    std::vector<AchievementObjective> finishedObjective;
    std::vector<AchievementStartedObjective> startedObjectives;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif