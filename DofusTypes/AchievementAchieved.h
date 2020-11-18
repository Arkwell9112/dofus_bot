#ifndef ACHIEVEMENTACHIEVED_H
#define ACHIEVEMENTACHIEVED_H

#include "Achievement.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AchievementAchieved : public DeserializeInterface {
public:
    unsigned int id = 0;
    double achievedBy = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _achievedByFunc(CustomDataInput *input);
};

#endif