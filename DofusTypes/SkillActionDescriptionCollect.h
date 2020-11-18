#ifndef SKILLACTIONDESCRIPTIONCOLLECT_H
#define SKILLACTIONDESCRIPTIONCOLLECT_H

#include "SkillActionDescriptionTimed.h"
#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SkillActionDescriptionCollect : public SkillActionDescriptionTimed {
public:
    unsigned int min = 0;
    unsigned int max = 0;

    void deserialize(CustomDataInput *input);

private:
    void _minFunc(CustomDataInput *input);

    void _maxFunc(CustomDataInput *input);
};

#endif