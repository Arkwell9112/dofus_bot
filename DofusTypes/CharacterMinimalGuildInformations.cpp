#include "GuildInformations.h"
#include "CharacterMinimalPlusLookInformations.h"
#include "CharacterMinimalGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalGuildInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->guild.deserialize(input);
}