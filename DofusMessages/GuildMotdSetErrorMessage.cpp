#include "SocialNoticeSetErrorMessage.h"
#include "GuildMotdSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildMotdSetErrorMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}