#ifndef EXTENDEDLOCKEDBREACHBRANCH_H
#define EXTENDEDLOCKEDBREACHBRANCH_H

#include "ExtendedBreachBranch.h"
#include "BreachBranch.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExtendedLockedBreachBranch : public ExtendedBreachBranch {
public:
    unsigned int unlockPrice = 0;

    void deserialize(CustomDataInput *input);

private:
    void _unlockPriceFunc(CustomDataInput *input);
};

#endif