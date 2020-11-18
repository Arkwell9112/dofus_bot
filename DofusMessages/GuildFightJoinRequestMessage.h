#ifndef GUILDFIGHTJOINREQUESTMESSAGE_H
#define GUILDFIGHTJOINREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFightJoinRequestMessage : public DeserializeInterface {
public:
    double taxCollectorId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _taxCollectorIdFunc(CustomDataInput *input);
};

#endif