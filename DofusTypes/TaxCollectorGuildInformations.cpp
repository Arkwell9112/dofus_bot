#include "TaxCollectorGuildInformations.h"
#include "TaxCollectorComplementaryInformations.h"
#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorGuildInformations::deserialize(CustomDataInput *input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->guild.deserialize(input);
}