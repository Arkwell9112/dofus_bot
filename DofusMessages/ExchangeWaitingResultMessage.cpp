#include "ExchangeWaitingResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeWaitingResultMessage::deserialize(CustomDataInput *input) {
    this->_bwaitFunc(input);
}

void ExchangeWaitingResultMessage::_bwaitFunc(CustomDataInput *input) {
    this->bwait = input->readBoolean();
}
