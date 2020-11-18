#ifndef GUILDMODIFICATIONNAMEVALIDMESSAGE_H
#define GUILDMODIFICATIONNAMEVALIDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildModificationNameValidMessage : public DeserializeInterface {
public:
    std::string guildName;

    void deserialize(CustomDataInput *input);

private:
    void _guildNameFunc(CustomDataInput *input);
};

#endif