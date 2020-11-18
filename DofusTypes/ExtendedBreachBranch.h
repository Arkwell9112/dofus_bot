#ifndef EXTENDEDBREACHBRANCH_H
#define EXTENDEDBREACHBRANCH_H

#include "BreachReward.h"
#include "BreachBranch.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ExtendedBreachBranch : public BreachBranch {
public:
    std::vector<BreachReward> rewards;
    int modifier = 0;
    unsigned int prize = 0;

    void deserialize(CustomDataInput *input);

private:
    void _modifierFunc(CustomDataInput *input);

    void _prizeFunc(CustomDataInput *input);
};

#endif