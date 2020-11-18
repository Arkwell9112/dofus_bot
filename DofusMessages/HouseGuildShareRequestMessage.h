#ifndef HOUSEGUILDSHAREREQUESTMESSAGE_H
#define HOUSEGUILDSHAREREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseGuildShareRequestMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int instanceId = 0;
    bool enable = false;
    unsigned int rights = 0;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _instanceIdFunc(CustomDataInput *input);

    void _enableFunc(CustomDataInput *input);

    void _rightsFunc(CustomDataInput *input);
};

#endif