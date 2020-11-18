#include "LockableChangeCodeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableChangeCodeMessage::deserialize(CustomDataInput *input) {
    this->_codeFunc(input);
}

void LockableChangeCodeMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readUTF();
}
