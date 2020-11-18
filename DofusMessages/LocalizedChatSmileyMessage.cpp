#include "LocalizedChatSmileyMessage.h"
#include "ChatSmileyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LocalizedChatSmileyMessage::deserialize(CustomDataInput *input) {
    ChatSmileyMessage::deserialize(input);
    this->_cellIdFunc(input);
}

void LocalizedChatSmileyMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
