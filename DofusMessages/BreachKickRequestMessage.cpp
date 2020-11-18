#include "BreachKickRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachKickRequestMessage::deserialize(CustomDataInput *input) {
    this->_targetFunc(input);
}

void BreachKickRequestMessage::_targetFunc(CustomDataInput *input) {
    this->target = input->readVarUhLong();
    if (this->target < 0 || this->target > 9007199254740990) {

    }
}
