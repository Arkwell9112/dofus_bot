#ifndef INTERACTIVEELEMENTNAMEDSKILL_H
#define INTERACTIVEELEMENTNAMEDSKILL_H

#include "InteractiveElementSkill.h"
#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveElementNamedSkill : public InteractiveElementSkill {
public:
    unsigned int nameId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _nameIdFunc(CustomDataInput *input);
};

#endif