#include "BreachBudgetMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachBudgetMessage::deserialize(CustomDataInput *input) {
    this->_bugdetFunc(input);
}

void BreachBudgetMessage::_bugdetFunc(CustomDataInput *input) {
    this->bugdet = input->readVarUhInt();
    if (this->bugdet < 0) {

    }
}
