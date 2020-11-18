#include "BreachKickResponseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachKickResponseMessage::deserialize(CustomDataInput *input) {
    this->target.deserialize(input);
    this->_kickedFunc(input);
}

void BreachKickResponseMessage::_kickedFunc(CustomDataInput *input) {
    this->kicked = input->readBoolean();
}
