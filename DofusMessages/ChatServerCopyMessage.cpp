#include "ChatServerCopyMessage.h"
#include "ChatAbstractServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatServerCopyMessage::deserialize(CustomDataInput *input) {
    ChatAbstractServerMessage::deserialize(input);
    this->_receiverIdFunc(input);
    this->_receiverNameFunc(input);
}

void ChatServerCopyMessage::_receiverIdFunc(CustomDataInput *input) {
    this->receiverId = input->readVarUhLong();
    if (this->receiverId < 0 || this->receiverId > 9007199254740990) {

    }
}

void ChatServerCopyMessage::_receiverNameFunc(CustomDataInput *input) {
    this->receiverName = input->readUTF();
}
