#include "ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage::deserialize(CustomDataInput *input) {
    this->_allowFunc(input);
}

void ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage::_allowFunc(CustomDataInput *input) {
    this->allow = input->readBoolean();
}
