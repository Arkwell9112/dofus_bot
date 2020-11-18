#include "SocialNoticeMessage.h"
#include "AllianceMotdMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AllianceMotdMessage::deserialize(CustomDataInput *input) {
    SocialNoticeMessage::deserialize(input);
}