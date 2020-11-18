#include "BreachRewardsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

void BreachRewardsMessage::deserialize(CustomDataInput *input) {
    BreachReward _item1;
    unsigned int _rewardsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _rewardsLen; _i1++) {
        _item1.deserialize(input);
        this->rewards.push_back(_item1);
    }
}