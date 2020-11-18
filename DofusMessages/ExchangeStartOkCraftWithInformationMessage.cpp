#include "ExchangeStartOkCraftWithInformationMessage.h"
#include "ExchangeStartOkCraftMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkCraftWithInformationMessage::deserialize(CustomDataInput *input) {
    ExchangeStartOkCraftMessage::deserialize(input);
    this->_skillIdFunc(input);
}

void ExchangeStartOkCraftWithInformationMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhInt();
    if (this->skillId < 0) {

    }
}
