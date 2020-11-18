#include "ChatCommunityChannelSetCommunityRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChatCommunityChannelSetCommunityRequestMessage::deserialize(CustomDataInput *input) {
    this->_communityIdFunc(input);
}

void ChatCommunityChannelSetCommunityRequestMessage::_communityIdFunc(CustomDataInput *input) {
    this->communityId = input->readShort();
}
