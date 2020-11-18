#include "AcquaintanceSearchMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AcquaintanceSearchMessage::deserialize(CustomDataInput *input) {
    this->_nicknameFunc(input);
}

void AcquaintanceSearchMessage::_nicknameFunc(CustomDataInput *input) {
    this->nickname = input->readUTF();
}
