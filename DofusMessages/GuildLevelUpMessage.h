#ifndef GUILDLEVELUPMESSAGE_H
#define GUILDLEVELUPMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildLevelUpMessage : public DeserializeInterface {
public:
    unsigned int newLevel = 0;

    void deserialize(CustomDataInput *input);

private:
};

#endif