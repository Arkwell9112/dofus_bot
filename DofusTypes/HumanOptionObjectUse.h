#ifndef HUMANOPTIONOBJECTUSE_H
#define HUMANOPTIONOBJECTUSE_H

#include "HumanOption.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionObjectUse : public HumanOption {
public:
    unsigned int delayTypeId = 0;
    double delayEndTime = 0;
    unsigned int objectGID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _delayTypeIdFunc(CustomDataInput *input);

    void _delayEndTimeFunc(CustomDataInput *input);

    void _objectGIDFunc(CustomDataInput *input);
};

#endif