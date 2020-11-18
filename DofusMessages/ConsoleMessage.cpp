#include "ConsoleMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ConsoleMessage::deserialize(CustomDataInput *input) {
    this->_typeFunc(input);
    this->_contentFunc(input);
}

void ConsoleMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}

void ConsoleMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
