#include "LockableCodeResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableCodeResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
}

void LockableCodeResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
