#ifndef HUMANOPTIONGUILD_H
#define HUMANOPTIONGUILD_H

#include "HumanOption.h"
#include "GuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HumanOptionGuild : public HumanOption {
public:
    GuildInformations guildInformations;

    void deserialize(CustomDataInput *input);

private:
};

#endif