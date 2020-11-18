#include "HouseInstanceInformations.h"
#include "HouseGuildedInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseGuildedInformations::deserialize(CustomDataInput *input) {
    HouseInstanceInformations::deserialize(input);
    this->guildInfo.deserialize(input);
}