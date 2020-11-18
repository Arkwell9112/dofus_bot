#include "ChatErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatErrorMessage::deserialize(CustomDataInput *input) {
    this->_reasonFunc(input);
}

void ChatErrorMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}
