#include "BreachRewardBoughtMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/BreachReward.h"

void BreachRewardBoughtMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_boughtFunc(input);
}

void BreachRewardBoughtMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhInt();
    if (this->id < 0) {

    }
}

void BreachRewardBoughtMessage::_boughtFunc(CustomDataInput *input) {
    this->bought = input->readBoolean();
}
