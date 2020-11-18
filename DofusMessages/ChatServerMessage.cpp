#include "ChatServerMessage.h"
#include "ChatAbstractServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatServerMessage::deserialize(CustomDataInput *input) {
    ChatAbstractServerMessage::deserialize(input);
    this->_senderIdFunc(input);
    this->_senderNameFunc(input);
    this->_prefixFunc(input);
    this->_senderAccountIdFunc(input);
}

void ChatServerMessage::_senderIdFunc(CustomDataInput *input) {
    this->senderId = input->readDouble();
    if (this->senderId < -9007199254740990 || this->senderId > 9007199254740990) {

    }
}

void ChatServerMessage::_senderNameFunc(CustomDataInput *input) {
    this->senderName = input->readUTF();
}

void ChatServerMessage::_prefixFunc(CustomDataInput *input) {
    this->prefix = input->readUTF();
}

void ChatServerMessage::_senderAccountIdFunc(CustomDataInput *input) {
    this->senderAccountId = input->readInt();
    if (this->senderAccountId < 0) {

    }
}
