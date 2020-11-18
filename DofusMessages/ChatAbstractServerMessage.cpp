#include "ChatAbstractServerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatAbstractServerMessage::deserialize(CustomDataInput *input) {
    this->_channelFunc(input);
    this->_contentFunc(input);
    this->_timestampFunc(input);
    this->_fingerprintFunc(input);
}

void ChatAbstractServerMessage::_channelFunc(CustomDataInput *input) {
    this->channel = input->readByte();
    if (this->channel < 0) {

    }
}

void ChatAbstractServerMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}

void ChatAbstractServerMessage::_timestampFunc(CustomDataInput *input) {
    this->timestamp = input->readInt();
    if (this->timestamp < 0) {

    }
}

void ChatAbstractServerMessage::_fingerprintFunc(CustomDataInput *input) {
    this->fingerprint = input->readUTF();
}
