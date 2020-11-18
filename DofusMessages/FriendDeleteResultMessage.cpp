#include "FriendDeleteResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendDeleteResultMessage::deserialize(CustomDataInput *input) {
    this->_successFunc(input);
    this->_nameFunc(input);
}

void FriendDeleteResultMessage::_successFunc(CustomDataInput *input) {
    this->success = input->readBoolean();
}

void FriendDeleteResultMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
