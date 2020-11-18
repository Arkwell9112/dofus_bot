#ifndef GUILDCREATIONSTARTEDMESSAGE_H
#define GUILDCREATIONSTARTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildCreationStartedMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif