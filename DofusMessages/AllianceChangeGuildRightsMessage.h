#ifndef ALLIANCECHANGEGUILDRIGHTSMESSAGE_H
#define ALLIANCECHANGEGUILDRIGHTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class AllianceChangeGuildRightsMessage : public DeserializeInterface {
public:
    unsigned int guildId = 0;
    unsigned int rights = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guildIdFunc(CustomDataInput *input);

    void _rightsFunc(CustomDataInput *input);
};

#endif