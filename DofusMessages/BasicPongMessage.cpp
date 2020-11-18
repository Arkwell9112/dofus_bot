#include "BasicPongMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicPongMessage::deserialize(CustomDataInput *input) {
    this->_quietFunc(input);
}

void BasicPongMessage::_quietFunc(CustomDataInput *input) {
    this->quiet = input->readBoolean();
}
