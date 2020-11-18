#ifndef GUILDMEMBERLEAVINGMESSAGE_H
#define GUILDMEMBERLEAVINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include <string>
#include <vector>

class GuildMemberLeavingMessage : public DeserializeInterface {
public:
    bool kicked = false;
    double memberId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kickedFunc(CustomDataInput *input);

    void _memberIdFunc(CustomDataInput *input);
};

#endif