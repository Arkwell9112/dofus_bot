#include "BreachEnterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachEnterMessage::deserialize(CustomDataInput *input) {
    this->_ownerFunc(input);
}

void BreachEnterMessage::_ownerFunc(CustomDataInput *input) {
    this->owner = input->readVarUhLong();
    if (this->owner < 0 || this->owner > 9007199254740990) {

    }
}
