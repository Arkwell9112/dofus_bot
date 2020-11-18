#include "SocialNoticeMessage.h"
#include "GuildMotdMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildMotdMessage::deserialize(CustomDataInput *input) {
    SocialNoticeMessage::deserialize(input);
}