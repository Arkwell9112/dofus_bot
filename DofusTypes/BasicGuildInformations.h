#ifndef BASICGUILDINFORMATIONS_H
#define BASICGUILDINFORMATIONS_H

#include "GuildInformations.h"
#include "AbstractSocialGroupInfos.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class BasicGuildInformations : public AbstractSocialGroupInfos {
public:
    unsigned int guildId = 0;
    std::string guildName;
    unsigned int guildLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildIdFunc(CustomDataInput *input);

    void _guildNameFunc(CustomDataInput *input);

    void _guildLevelFunc(CustomDataInput *input);
};

#endif