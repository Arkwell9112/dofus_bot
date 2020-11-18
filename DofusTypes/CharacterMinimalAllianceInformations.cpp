#include "GuildInformations.h"
#include "CharacterMinimalGuildInformations.h"
#include "CharacterMinimalAllianceInformations.h"
#include "AllianceInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalAllianceInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalGuildInformations::deserialize(input);
    this->alliance.deserialize(input);
}