#include "ClientKeyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ClientKeyMessage::deserialize(CustomDataInput *input) {
    this->_keyFunc(input);
}

void ClientKeyMessage::_keyFunc(CustomDataInput *input) {
    this->key = input->readUTF();
}
