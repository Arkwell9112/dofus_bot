#include "FriendStatusShareStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendStatusShareStateMessage::deserialize(CustomDataInput *input) {
    this->_shareFunc(input);
}

void FriendStatusShareStateMessage::_shareFunc(CustomDataInput *input) {
    this->share = input->readBoolean();
}
