#ifndef HUMANOPTIONSKILLUSE_H
#define HUMANOPTIONSKILLUSE_H

#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionSkillUse : public HumanOption {
public:
    unsigned int elementId = 0;
    unsigned int skillId = 0;
    double skillEndTime = 0;

    void deserialize(CustomDataInput *input);

private:
    void _elementIdFunc(CustomDataInput *input);

    void _skillIdFunc(CustomDataInput *input);

    void _skillEndTimeFunc(CustomDataInput *input);
};

#endif