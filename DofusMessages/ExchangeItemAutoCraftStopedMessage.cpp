#include "ExchangeItemAutoCraftStopedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Item.h"

void ExchangeItemAutoCraftStopedMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void ExchangeItemAutoCraftStopedMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
}
