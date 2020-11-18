#include "ChatSmileyRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatSmileyRequestMessage::deserialize(CustomDataInput *input) {
    this->_smileyIdFunc(input);
}

void ChatSmileyRequestMessage::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}
