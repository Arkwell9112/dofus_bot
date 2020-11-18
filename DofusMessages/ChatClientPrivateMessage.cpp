#include "ChatClientPrivateMessage.h"
#include "ChatAbstractClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatClientPrivateMessage::deserialize(CustomDataInput *input) {
    ChatAbstractClientMessage::deserialize(input);
    this->_receiverFunc(input);
}

void ChatClientPrivateMessage::_receiverFunc(CustomDataInput *input) {
    this->receiver = input->readUTF();
}
