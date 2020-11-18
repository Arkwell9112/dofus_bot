#include "GuildModificationEmblemValidMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildModificationEmblemValidMessage::deserialize(CustomDataInput *input) {
    this->guildEmblem.deserialize(input);
}