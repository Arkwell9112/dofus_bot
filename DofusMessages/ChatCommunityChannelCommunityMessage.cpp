#include "ChatCommunityChannelCommunityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatCommunityChannelCommunityMessage::deserialize(CustomDataInput *input) {
    this->_communityIdFunc(input);
}

void ChatCommunityChannelCommunityMessage::_communityIdFunc(CustomDataInput *input) {
    this->communityId = input->readShort();
}
