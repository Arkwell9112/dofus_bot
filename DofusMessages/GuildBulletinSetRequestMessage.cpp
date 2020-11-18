#include "SocialNoticeSetRequestMessage.h"
#include "GuildBulletinSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildBulletinSetRequestMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
    this->_notifyMembersFunc(input);
}

void GuildBulletinSetRequestMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}

void GuildBulletinSetRequestMessage::_notifyMembersFunc(CustomDataInput *input) {
    this->notifyMembers = input->readBoolean();
}
