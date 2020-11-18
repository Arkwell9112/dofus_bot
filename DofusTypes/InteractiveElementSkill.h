#ifndef INTERACTIVEELEMENTSKILL_H
#define INTERACTIVEELEMENTSKILL_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveElementSkill : public DeserializeInterface {
public:
    unsigned int skillId = 0;
    unsigned int skillInstanceUid = 0;

    void deserialize(CustomDataInput *input);

private:
    void _skillIdFunc(CustomDataInput *input);

    void _skillInstanceUidFunc(CustomDataInput *input);
};

#endif