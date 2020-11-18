#ifndef GUILDVERSATILEINFOLISTMESSAGE_H
#define GUILDVERSATILEINFOLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildVersatileInformations.h"

#include <string>
#include <vector>

class GuildVersatileInfoListMessage : public DeserializeInterface {
public:
    std::vector<GuildVersatileInformations> guilds;

    void deserialize(CustomDataInput *input);

private:
    void _guildsFunc(CustomDataInput *input);
};

#endif