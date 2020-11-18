#ifndef GUILDGETINFORMATIONSMESSAGE_H
#define GUILDGETINFORMATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildGetInformationsMessage : public DeserializeInterface {
public:
    unsigned int infoType = 0;

    void deserialize(CustomDataInput *input);

private:
    void _infoTypeFunc(CustomDataInput *input);
};

#endif