#include "ChatClientMultiMessage.h"
#include "ChatAbstractClientMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatClientMultiMessage::deserialize(CustomDataInput *input) {
    ChatAbstractClientMessage::deserialize(input);
    this->_channelFunc(input);
}

void ChatClientMultiMessage::_channelFunc(CustomDataInput *input) {
    this->channel = input->readByte();
    if (this->channel < 0) {

    }
}
