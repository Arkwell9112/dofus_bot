#ifndef GUILDKICKREQUESTMESSAGE_H
#define GUILDKICKREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildKickRequestMessage : public DeserializeInterface {
public:
    double kickedId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickedIdFunc(CustomDataInput *input);
};

#endif