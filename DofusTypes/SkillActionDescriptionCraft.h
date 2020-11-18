#ifndef SKILLACTIONDESCRIPTIONCRAFT_H
#define SKILLACTIONDESCRIPTIONCRAFT_H

#include "SkillActionDescription.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SkillActionDescriptionCraft : public SkillActionDescription {
public:
    unsigned int probability = 0;

    void deserialize(CustomDataInput *input);

private:
    void _probabilityFunc(CustomDataInput *input);
};

#endif