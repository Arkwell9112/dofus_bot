#include "ExchangeRequestMessage.h"
#include "ExchangePlayerRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangePlayerRequestMessage::deserialize(CustomDataInput *input) {
    ExchangeRequestMessage::deserialize(input);
    this->_targetFunc(input);
}

void ExchangePlayerRequestMessage::_targetFunc(CustomDataInput *input) {
    this->target = input->readVarUhLong();
    if (this->target < 0 || this->target > 9007199254740990) {

    }
}
