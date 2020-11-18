#include "DebugInClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void DebugInClientMessage::deserialize(CustomDataInput *input) {
    this->_levelFunc(input);
    this->_messageFunc(input);
}

void DebugInClientMessage::_levelFunc(CustomDataInput *input) {
    this->level = input->readByte();
    if (this->level < 0) {

    }
}

void DebugInClientMessage::_messageFunc(CustomDataInput *input) {
    this->message = input->readUTF();
}
