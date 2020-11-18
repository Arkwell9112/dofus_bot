#ifndef GUILDINFORMATIONSMEMBERUPDATEMESSAGE_H
#define GUILDINFORMATIONSMEMBERUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildInformationsMemberUpdateMessage : public DeserializeInterface {
public:
    GuildMember member;

    void deserialize(CustomDataInput *input);

private:
};

#endif