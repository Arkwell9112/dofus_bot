#include "NicknameRefusedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NicknameRefusedMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void NicknameRefusedMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
