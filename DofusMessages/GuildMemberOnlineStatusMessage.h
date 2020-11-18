#ifndef GUILDMEMBERONLINESTATUSMESSAGE_H
#define GUILDMEMBERONLINESTATUSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include <string>
#include <vector>

class GuildMemberOnlineStatusMessage : public DeserializeInterface {
public:
    double memberId = 0;
    bool online = false;

    void deserialize(CustomDataInput *input);

private:
    void _memberIdFunc(CustomDataInput *input);

    void _onlineFunc(CustomDataInput *input);
};

#endif