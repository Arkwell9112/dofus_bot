#ifndef GUILDLEFTMESSAGE_H
#define GUILDLEFTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildLeftMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif