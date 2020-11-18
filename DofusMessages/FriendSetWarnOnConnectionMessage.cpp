#include "FriendSetWarnOnConnectionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSetWarnOnConnectionMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendSetWarnOnConnectionMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
