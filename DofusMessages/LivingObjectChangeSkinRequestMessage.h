#ifndef LIVINGOBJECTCHANGESKINREQUESTMESSAGE_H
#define LIVINGOBJECTCHANGESKINREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LivingObjectChangeSkinRequestMessage : public DeserializeInterface {
public:
    unsigned int livingUID = 0;
    unsigned int livingPosition = 0;
    unsigned int skinId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _livingUIDFunc(CustomDataInput *input);

    void _livingPositionFunc(CustomDataInput *input);

    void _skinIdFunc(CustomDataInput *input);
};

#endif