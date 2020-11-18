#ifndef BREACHREWARDBOUGHTMESSAGE_H
#define BREACHREWARDBOUGHTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

#include <string>
#include <vector>

class BreachRewardBoughtMessage : public DeserializeInterface {
public:
    unsigned int id = 0;
    bool bought = false;

    void deserialize(CustomDataInput *input);

private:
    void _idFunc(CustomDataInput *input);

    void _boughtFunc(CustomDataInput *input);
};

#endif