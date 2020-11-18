#include "CheckFileMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CheckFileMessage::deserialize(CustomDataInput *input) {
    this->_filenameHashFunc(input);
    this->_typeFunc(input);
    this->_valueFunc(input);
}

void CheckFileMessage::_filenameHashFunc(CustomDataInput *input) {
    this->filenameHash = input->readUTF();
}

void CheckFileMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}

void CheckFileMessage::_valueFunc(CustomDataInput *input) {
    this->value = input->readUTF();
}
