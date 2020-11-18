#include "FriendWarnOnLevelGainStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FriendWarnOnLevelGainStateMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendWarnOnLevelGainStateMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
