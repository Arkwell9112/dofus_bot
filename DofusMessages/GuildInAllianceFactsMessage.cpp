#include "GuildInAllianceFactsMessage.h"
#include "GuildFactsMessage.h"
#include "AllianceFactsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInAllianceFactsMessage::deserialize(CustomDataInput *input) {
    GuildFactsMessage::deserialize(input);
    this->allianceInfos.deserialize(input);
}