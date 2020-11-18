#include "FriendSpouseFollowWithCompassRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSpouseFollowWithCompassRequestMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendSpouseFollowWithCompassRequestMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
