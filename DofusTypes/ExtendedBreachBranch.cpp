#include "ExtendedBreachBranch.h"
#include "BreachReward.h"
#include "BreachBranch.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExtendedBreachBranch::deserialize(CustomDataInput *input) {
    BreachReward _item1;
    BreachBranch::deserialize(input);
    unsigned int _rewardsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _rewardsLen; _i1++) {
        _item1.deserialize(input);
        this->rewards.push_back(_item1);
    }
    this->_modifierFunc(input);
    this->_prizeFunc(input);
}

void ExtendedBreachBranch::_modifierFunc(CustomDataInput *input) {
    this->modifier = input->readVarInt();
}

void ExtendedBreachBranch::_prizeFunc(CustomDataInput *input) {
    this->prize = input->readVarUhInt();
    if (this->prize < 0) {

    }
}
