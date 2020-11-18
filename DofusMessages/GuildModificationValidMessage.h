#ifndef GUILDMODIFICATIONVALIDMESSAGE_H
#define GUILDMODIFICATIONVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class GuildModificationValidMessage : public DeserializeInterface {
public:
    std::string guildName;
    GuildEmblem guildEmblem;

    void deserialize(CustomDataInput *input);

private:
    void _guildNameFunc(CustomDataInput *input);
};

#endif