#include "BasicWhoIsNoMatchMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicWhoIsNoMatchMessage::deserialize(CustomDataInput *input) {
    this->_searchFunc(input);
}

void BasicWhoIsNoMatchMessage::_searchFunc(CustomDataInput *input) {
    this->search = input->readUTF();
}
