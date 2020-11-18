#include "FriendAddRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendAddRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
}

void FriendAddRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
