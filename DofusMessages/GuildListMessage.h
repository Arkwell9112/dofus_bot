#ifndef GUILDLISTMESSAGE_H
#define GUILDLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildListMessage : public DeserializeInterface {
public:
    std::vector<GuildInformations> guilds;

    void deserialize(CustomDataInput *input);

private:
};

#endif