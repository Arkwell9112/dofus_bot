#include "FriendJoinRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendJoinRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
}

void FriendJoinRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
