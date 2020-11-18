#ifndef GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE_H
#define GUILDMEMBERWARNONCONNECTIONSTATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include <string>
#include <vector>

class GuildMemberWarnOnConnectionStateMessage : public DeserializeInterface {
public:
    bool enable = false;

    void deserialize(CustomDataInput *input);

private:
    void _enableFunc(CustomDataInput *input);
};

#endif