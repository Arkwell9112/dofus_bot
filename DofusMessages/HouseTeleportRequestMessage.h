#ifndef HOUSETELEPORTREQUESTMESSAGE_H
#define HOUSETELEPORTREQUESTMESSAGE_H

#include "TeleportRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class HouseTeleportRequestMessage : public DeserializeInterface {
public:
    unsigned int houseId = 0;
    unsigned int houseInstanceId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _houseIdFunc(CustomDataInput *input);

    void _houseInstanceIdFunc(CustomDataInput *input);
};

#endif