#include "ExchangeWeightMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeWeightMessage::deserialize(CustomDataInput *input) {
    this->_currentWeightFunc(input);
    this->_maxWeightFunc(input);
}

void ExchangeWeightMessage::_currentWeightFunc(CustomDataInput *input) {
    this->currentWeight = input->readVarUhInt();
    if (this->currentWeight < 0) {

    }
}

void ExchangeWeightMessage::_maxWeightFunc(CustomDataInput *input) {
    this->maxWeight = input->readVarUhInt();
    if (this->maxWeight < 0) {

    }
}
