#include "NpcDialogReplyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void NpcDialogReplyMessage::deserialize(CustomDataInput *input) {
    this->_replyIdFunc(input);
}

void NpcDialogReplyMessage::_replyIdFunc(CustomDataInput *input) {
    this->replyId = input->readVarUhInt();
    if (this->replyId < 0) {

    }
}
