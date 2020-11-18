#include "AdminCommandMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AdminCommandMessage::deserialize(CustomDataInput *input) {
    this->_contentFunc(input);
}

void AdminCommandMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
