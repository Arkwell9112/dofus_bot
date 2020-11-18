#include "SocialNoticeSetRequestMessage.h"
#include "AllianceBulletinSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceBulletinSetRequestMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
    this->_notifyMembersFunc(input);
}

void AllianceBulletinSetRequestMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}

void AllianceBulletinSetRequestMessage::_notifyMembersFunc(CustomDataInput *input) {
    this->notifyMembers = input->readBoolean();
}
