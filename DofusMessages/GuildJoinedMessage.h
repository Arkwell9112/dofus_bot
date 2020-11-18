#ifndef GUILDJOINEDMESSAGE_H
#define GUILDJOINEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildJoinedMessage : public DeserializeInterface {
public:
    GuildInformations guildInfo;
    unsigned int memberRights = 0;

    void deserialize(CustomDataInput *input);

private:
    void _memberRightsFunc(CustomDataInput *input);
};

#endif