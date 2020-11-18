#include "ExchangeErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorTypeFunc(input);
}

void ExchangeErrorMessage::_errorTypeFunc(CustomDataInput *input) {
    this->errorType = input->readByte();
}
