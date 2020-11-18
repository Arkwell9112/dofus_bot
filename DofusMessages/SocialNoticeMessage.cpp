#include "SocialNoticeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SocialNoticeMessage::deserialize(CustomDataInput *input) {
    this->_contentFunc(input);
    this->_timestampFunc(input);
    this->_memberIdFunc(input);
    this->_memberNameFunc(input);
}

void SocialNoticeMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}

void SocialNoticeMessage::_timestampFunc(CustomDataInput *input) {
    this->timestamp = input->readInt();
    if (this->timestamp < 0) {

    }
}

void SocialNoticeMessage::_memberIdFunc(CustomDataInput *input) {
    this->memberId = input->readVarUhLong();
    if (this->memberId < 0 || this->memberId > 9007199254740990) {

    }
}

void SocialNoticeMessage::_memberNameFunc(CustomDataInput *input) {
    this->memberName = input->readUTF();
}
