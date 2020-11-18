#include "FriendSetWarnOnLevelGainMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendSetWarnOnLevelGainMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendSetWarnOnLevelGainMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
