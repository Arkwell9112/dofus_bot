#ifndef GUILDFACTSREQUESTMESSAGE_H
#define GUILDFACTSREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFactsRequestMessage : public DeserializeInterface {
public:
    unsigned int guildId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildIdFunc(CustomDataInput *input);
};

#endif