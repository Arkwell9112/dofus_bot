#ifndef GUILDINFORMATIONSMEMBERSMESSAGE_H
#define GUILDINFORMATIONSMEMBERSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildMember.h"

#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class GuildInformationsMembersMessage : public DeserializeInterface {
public:
    std::vector<GuildMember> members;

    void deserialize(CustomDataInput *input);

private:
};

#endif