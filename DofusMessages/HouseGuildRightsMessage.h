#ifndef HOUSEGUILDRIGHTSMESSAGE_H
#define HOUSEGUILDRIGHTSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/GuildInformations.h"

#include <string>
#include <vector>

class HouseGuildRightsMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool secondHand = false;
    GuildInformations guildInfo;
    unsigned int rights = 0;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _secondHandFunc(CustomDataInput *input);

    void _rightsFunc(CustomDataInput *input);
};

#endif