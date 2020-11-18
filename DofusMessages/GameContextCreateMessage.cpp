#include "GameContextCreateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextCreateMessage::deserialize(CustomDataInput *input) {
    this->_contextFunc(input);
}

void GameContextCreateMessage::_contextFunc(CustomDataInput *input) {
    this->context = input->readByte();
    if (this->context < 0) {

    }
}
