#ifndef HOUSEGUILDEDINFORMATIONS_H
#define HOUSEGUILDEDINFORMATIONS_H

#include "HouseInstanceInformations.h"
#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseGuildedInformations : public HouseInstanceInformations {
public:
    GuildInformations guildInfo;

    void deserialize(CustomDataInput *input);

private:
};

#endif