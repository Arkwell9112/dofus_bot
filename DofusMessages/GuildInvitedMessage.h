#ifndef GUILDINVITEDMESSAGE_H
#define GUILDINVITEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include "../DofusTypes/BasicGuildInformations.h"

#include <string>
#include <vector>

class GuildInvitedMessage : public DeserializeInterface {
public:
    double recruterId = 0;
    std::string recruterName;
    BasicGuildInformations guildInfo;

    void deserialize(CustomDataInput *input);

private:
    void _recruterIdFunc(CustomDataInput *input);

    void _recruterNameFunc(CustomDataInput *input);
};

#endif