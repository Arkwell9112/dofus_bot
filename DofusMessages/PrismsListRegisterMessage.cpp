#include "PrismsListRegisterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismsListRegisterMessage::deserialize(CustomDataInput *input) {
    this->_listenFunc(input);
}

void PrismsListRegisterMessage::_listenFunc(CustomDataInput *input) {
    this->listen = input->readByte();
    if (this->listen < 0) {

    }
}
