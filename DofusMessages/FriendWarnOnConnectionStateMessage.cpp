#include "FriendWarnOnConnectionStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendWarnOnConnectionStateMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendWarnOnConnectionStateMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
