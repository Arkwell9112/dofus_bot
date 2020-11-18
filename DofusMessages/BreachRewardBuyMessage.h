#ifndef BREACHREWARDBUYMESSAGE_H
#define BREACHREWARDBUYMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

#include <string>
#include <vector>

class BreachRewardBuyMessage : public DeserializeInterface {
public:
    unsigned int id = 0;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);
};

#endif