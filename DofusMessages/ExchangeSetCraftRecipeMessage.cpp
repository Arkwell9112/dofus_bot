#include "ExchangeSetCraftRecipeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeSetCraftRecipeMessage::deserialize(CustomDataInput *input) {
    this->_objectGIDFunc(input);
}

void ExchangeSetCraftRecipeMessage::_objectGIDFunc(CustomDataInput *input) {
    this->objectGID = input->readVarUhShort();
    if (this->objectGID < 0) {

    }
}
