#ifndef BREACHREWARDSMESSAGE_H
#define BREACHREWARDSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

#include <string>
#include <vector>

class BreachRewardsMessage : public DeserializeInterface {
public:
    std::vector<BreachReward> rewards;

    void deserialize(CustomDataInput *input);

private:
};

#endif