#include "LockableUseCodeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LockableUseCodeMessage::deserialize(CustomDataInput *input) {
    this->_codeFunc(input);
}

void LockableUseCodeMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readUTF();
}
