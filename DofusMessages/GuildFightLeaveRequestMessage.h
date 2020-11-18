#ifndef GUILDFIGHTLEAVEREQUESTMESSAGE_H
#define GUILDFIGHTLEAVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GuildFightLeaveRequestMessage : public DeserializeInterface {
public:
    double taxCollectorId = 0;
    double characterId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _taxCollectorIdFunc(CustomDataInput *input);

    void _characterIdFunc(CustomDataInput *input);
};

#endif