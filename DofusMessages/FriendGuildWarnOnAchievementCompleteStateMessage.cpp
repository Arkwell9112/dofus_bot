#include "FriendGuildWarnOnAchievementCompleteStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Achievement.h"

void FriendGuildWarnOnAchievementCompleteStateMessage::deserialize(CustomDataInput *input) {
    this->_enableFunc(input);
}

void FriendGuildWarnOnAchievementCompleteStateMessage::_enableFunc(CustomDataInput *input) {
    this->enable = input->readBoolean();
}
