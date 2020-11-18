#include "BreachSavedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachSavedMessage::deserialize(CustomDataInput *input) {
    this->_savedFunc(input);
}

void BreachSavedMessage::_savedFunc(CustomDataInput *input) {
    this->saved = input->readBoolean();
}
