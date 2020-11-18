#include "FriendGuildSetWarnOnAchievementCompleteMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void FriendGuildSetWarnOnAchievementCompleteMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendGuildSetWarnOnAchievementCompleteMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
