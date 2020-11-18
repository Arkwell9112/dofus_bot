#include "CheckFileRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CheckFileRequestMessage::deserialize(CustomDataInput *input) {
    this->_filenameFunc(input);
    this->_typeFunc(input);
}

void CheckFileRequestMessage::_filenameFunc(CustomDataInput *input) {
    this->filename = input->readUTF();
}

void CheckFileRequestMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
