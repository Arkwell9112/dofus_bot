#include "ExtendedLockedBreachBranch.h"
#include "ExtendedBreachBranch.h"
#include "BreachBranch.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExtendedLockedBreachBranch::deserialize(CustomDataInput *input) {
    ExtendedBreachBranch::deserialize(input);
    this->_unlockPriceFunc(input);
}

void ExtendedLockedBreachBranch::_unlockPriceFunc(CustomDataInput *input) {
    this->unlockPrice = input->readVarUhInt();
    if (this->unlockPrice < 0) {

    }
}
