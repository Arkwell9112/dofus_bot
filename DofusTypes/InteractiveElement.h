#ifndef INTERACTIVEELEMENT_H
#define INTERACTIVEELEMENT_H

#include "InteractiveElementSkill.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveElement : public DeserializeInterface {
public:
    unsigned int elementId = 0;
    int elementTypeId = 0;
    std::vector<InteractiveElementSkill> enabledSkills;
    std::vector<InteractiveElementSkill> disabledSkills;
    bool onCurrentMap = false;

    void deserialize(CustomDataInput *input);

private:
    void _elementIdFunc(CustomDataInput *input);

    void _elementTypeIdFunc(CustomDataInput *input);

    void _enabledSkillsFunc(CustomDataInput *input);

    void _disabledSkillsFunc(CustomDataInput *input);

    void _onCurrentMapFunc(CustomDataInput *input);
};

#endif