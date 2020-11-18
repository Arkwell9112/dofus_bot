#include "ExchangeRequestedTradeMessage.h"
#include "ExchangeRequestedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeRequestedTradeMessage::deserialize(CustomDataInput *input) {
    ExchangeRequestedMessage::deserialize(input);
    this->_sourceFunc(input);
    this->_targetFunc(input);
}

void ExchangeRequestedTradeMessage::_sourceFunc(CustomDataInput *input) {
    this->source = input->readVarUhLong();
    if (this->source < 0 || this->source > 9007199254740990) {

    }
}

void ExchangeRequestedTradeMessage::_targetFunc(CustomDataInput *input) {
    this->target = input->readVarUhLong();
    if (this->target < 0 || this->target > 9007199254740990) {

    }
}
