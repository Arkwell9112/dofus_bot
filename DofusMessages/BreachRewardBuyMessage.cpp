#include "BreachRewardBuyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

void BreachRewardBuyMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void BreachRewardBuyMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhInt();
    if (this->id < 0) {

    }
}
