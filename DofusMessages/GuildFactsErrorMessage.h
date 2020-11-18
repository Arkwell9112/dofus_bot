#ifndef GUILDFACTSERRORMESSAGE_H
#define GUILDFACTSERRORMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFactsErrorMessage : public DeserializeInterface {
public:
    unsigned int guildId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildIdFunc(CustomDataInput *input);
};

#endif