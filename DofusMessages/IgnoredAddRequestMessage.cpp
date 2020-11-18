#include "IgnoredAddRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IgnoredAddRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_sessionFunc(input);
}

void IgnoredAddRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void IgnoredAddRequestMessage::_sessionFunc(CustomDataInput *input) {
    this->session = input->readBoolean();
}
