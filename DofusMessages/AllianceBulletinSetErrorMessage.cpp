#include "SocialNoticeSetErrorMessage.h"
#include "AllianceBulletinSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceBulletinSetErrorMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}