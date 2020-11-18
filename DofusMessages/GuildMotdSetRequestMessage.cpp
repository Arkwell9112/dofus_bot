#include "SocialNoticeSetRequestMessage.h"
#include "GuildMotdSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildMotdSetRequestMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
}

void GuildMotdSetRequestMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
