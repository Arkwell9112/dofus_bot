#ifndef GUILDMODIFICATIONEMBLEMVALIDMESSAGE_H
#define GUILDMODIFICATIONEMBLEMVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildEmblem.h"

#include <string>
#include <vector>

class GuildModificationEmblemValidMessage : public DeserializeInterface {
public:
    GuildEmblem guildEmblem;

    void deserialize(CustomDataInput *input);

private:
};

#endif