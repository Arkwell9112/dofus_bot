#ifndef GUILDMEMBERSHIPMESSAGE_H
#define GUILDMEMBERSHIPMESSAGE_H

#include "GuildJoinedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include <string>
#include <vector>

class GuildMembershipMessage : public GuildJoinedMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif