#include "GameFightEndMessage.h"
#include "BreachGameFightEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachGameFightEndMessage::deserialize(CustomDataInput *input) {
    GameFightEndMessage::deserialize(input);
    this->_budgetFunc(input);
}

void BreachGameFightEndMessage::_budgetFunc(CustomDataInput *input) {
    this->budget = input->readInt();
}
