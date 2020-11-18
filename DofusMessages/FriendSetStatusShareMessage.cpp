#include "FriendSetStatusShareMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSetStatusShareMessage::deserialize(CustomDataInput *input) {
    this->_shareFunc(input);
}

void FriendSetStatusShareMessage::_shareFunc(CustomDataInput *input) {
    this->share = input->readBoolean();
}
