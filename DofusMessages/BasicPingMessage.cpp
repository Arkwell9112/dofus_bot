#include "BasicPingMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicPingMessage::deserialize(CustomDataInput *input) {
    this->_quietFunc(input);
}

void BasicPingMessage::_quietFunc(CustomDataInput *input) {
    this->quiet = input->readBoolean();
}
