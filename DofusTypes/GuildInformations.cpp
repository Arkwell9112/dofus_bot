#include "GuildInformations.h"
#include "BasicGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildInformations::deserialize(CustomDataInput *input) {
    BasicGuildInformations::deserialize(input);
    this->guildEmblem.deserialize(input);
}