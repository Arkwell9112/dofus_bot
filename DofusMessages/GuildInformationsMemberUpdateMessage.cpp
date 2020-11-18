#include "GuildInformationsMemberUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

void GuildInformationsMemberUpdateMessage::deserialize(CustomDataInput *input) {
    this->member.deserialize(input);
}