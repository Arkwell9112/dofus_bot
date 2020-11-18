#ifndef INTERACTIVEELEMENTWITHAGEBONUS_H
#define INTERACTIVEELEMENTWITHAGEBONUS_H

#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InteractiveElementWithAgeBonus : public InteractiveElement {
public:
    int ageBonus = 0;

    void deserialize(CustomDataInput *input);

private:
    void _ageBonusFunc(CustomDataInput *input);
};

#endif