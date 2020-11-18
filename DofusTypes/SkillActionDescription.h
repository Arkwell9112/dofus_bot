#ifndef SKILLACTIONDESCRIPTION_H
#define SKILLACTIONDESCRIPTION_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SkillActionDescription : public DeserializeInterface {
public:
    unsigned int skillId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _skillIdFunc(CustomDataInput *input);
};

#endif