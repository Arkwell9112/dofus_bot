#ifndef PADDOCKGUILDEDINFORMATIONS_H
#define PADDOCKGUILDEDINFORMATIONS_H

#include "PaddockBuyableInformations.h"
#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockGuildedInformations : public PaddockBuyableInformations {
public:
    bool deserted = false;
    GuildInformations guildInfo;

    void deserialize(CustomDataInput *input);

private:
    void _desertedFunc(CustomDataInput *input);
};

#endif