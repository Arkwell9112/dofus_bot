#include "ExchangeObjectMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectMessage::deserialize(CustomDataInput *input) {
    this->_remoteFunc(input);
}

void ExchangeObjectMessage::_remoteFunc(CustomDataInput *input) {
    this->remote = input->readBoolean();
}
