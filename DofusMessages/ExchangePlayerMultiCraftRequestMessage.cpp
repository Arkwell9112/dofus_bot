#include "ExchangeRequestMessage.h"
#include "ExchangePlayerMultiCraftRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangePlayerMultiCraftRequestMessage::deserialize(CustomDataInput *input) {
    ExchangeRequestMessage::deserialize(input);
    this->_targetFunc(input);
    this->_skillIdFunc(input);
}

void ExchangePlayerMultiCraftRequestMessage::_targetFunc(CustomDataInput *input) {
    this->target = input->readVarUhLong();
    if (this->target < 0 || this->target > 9007199254740990) {

    }
}

void ExchangePlayerMultiCraftRequestMessage::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhInt();
    if (this->skillId < 0) {

    }
}
