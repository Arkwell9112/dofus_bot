#ifndef GUILDCREATIONVALIDMESSAGE_H
#define GUILDCREATIONVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class GuildCreationValidMessage : public DeserializeInterface {
public:
    std::string guildName;
    GuildEmblem guildEmblem;

    void deserialize(CustomDataInput *input);

private:
    void _guildNameFunc(CustomDataInput *input);
};

#endif