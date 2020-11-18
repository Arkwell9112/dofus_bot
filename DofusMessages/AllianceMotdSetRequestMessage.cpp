#include "SocialNoticeSetRequestMessage.h"
#include "AllianceMotdSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceMotdSetRequestMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
}

void AllianceMotdSetRequestMessage::_contentFunc(CustomDataInput *input) {
    this->content = input->readUTF();
}
