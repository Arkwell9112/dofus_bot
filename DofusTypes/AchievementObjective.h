#ifndef ACHIEVEMENTOBJECTIVE_H
#define ACHIEVEMENTOBJECTIVE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AchievementObjective : public DeserializeInterface {
public:
    unsigned int id = 0;
    unsigned int maxValue = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _maxValueFunc(CustomDataInput *input);
};

#endif