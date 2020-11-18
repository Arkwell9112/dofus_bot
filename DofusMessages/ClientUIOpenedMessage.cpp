#include "ClientUIOpenedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ClientUIOpenedMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
}

void ClientUIOpenedMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
