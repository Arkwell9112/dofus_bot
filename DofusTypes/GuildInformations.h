#ifndef GUILDINFORMATIONS_H
#define GUILDINFORMATIONS_H

#include "GuildEmblem.h"
#include "BasicGuildInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildInformations : public BasicGuildInformations {
public:
    GuildEmblem guildEmblem;

    void deserialize(CustomDataInput *input);

private:
};

#endif