#include "ExchangeMultiCraftCrafterCanUseHisRessourcesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMultiCraftCrafterCanUseHisRessourcesMessage::deserialize(CustomDataInput *input) {
    this->_allowedFunc(input);
}

void ExchangeMultiCraftCrafterCanUseHisRessourcesMessage::_allowedFunc(CustomDataInput *input) {
    this->allowed = input->readBoolean();
}
