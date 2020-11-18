#include "BreachExitResponseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachExitResponseMessage::deserialize(CustomDataInput *input) {
    this->_exitedFunc(input);
}

void BreachExitResponseMessage::_exitedFunc(CustomDataInput *input) {
    this->exited = input->readBoolean();
}
