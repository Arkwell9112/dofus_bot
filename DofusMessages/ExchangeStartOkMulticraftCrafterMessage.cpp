#include "ExchangeStartOkMulticraftCrafterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkMulticraftCrafterMessage::deserialize(CustomDataInput *input) {
    this->_skillIdFunc(input);
}

void ExchangeStartOkMulticraftCrafterMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhInt();
    if (this->skillId < 0) {

    }
}
