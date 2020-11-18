#ifndef SKILLACTIONDESCRIPTIONTIMED_H
#define SKILLACTIONDESCRIPTIONTIMED_H

#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SkillActionDescriptionTimed : public SkillActionDescription {
public:
    unsigned int time = 0;

    void deserialize(CustomDataInput *input);

private:
    void _timeFunc(CustomDataInput *input);
};

#endif