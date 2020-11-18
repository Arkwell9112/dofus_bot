#include "SocialNoticeSetErrorMessage.h"
#include "AllianceMotdSetErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceMotdSetErrorMessage::deserialize(CustomDataInput *input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}