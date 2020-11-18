#include "ChatAbstractClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatAbstractClientMessage::deserialize(CustomDataInput *input) {
    this->_contentFunc(input);
}

void ChatAbstractClientMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
