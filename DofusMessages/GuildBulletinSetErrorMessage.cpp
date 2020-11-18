#include "SocialNoticeSetErrorMessage.h"
#include "GuildBulletinSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildBulletinSetErrorMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}