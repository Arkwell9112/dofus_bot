#include "ExchangePodsModifiedMessage.h"
#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangePodsModifiedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMessage::deserialize(input);
    this->_currentWeightFunc(input);
    this->_maxWeightFunc(input);
}

void ExchangePodsModifiedMessage::_currentWeightFunc(CustomDataInput *input) {
    this->currentWeight = input->readVarUhInt();
    if (this->currentWeight < 0) {

    }
}

void ExchangePodsModifiedMessage::_maxWeightFunc(CustomDataInput *input) {
    this->maxWeight = input->readVarUhInt();
    if (this->maxWeight < 0) {

    }
}
