#ifndef LIVINGOBJECTDISSOCIATEMESSAGE_H
#define LIVINGOBJECTDISSOCIATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class LivingObjectDissociateMessage : public DeserializeInterface {
public:
    unsigned int livingUID = 0;
    unsigned int livingPosition = 0;

    void deserialize(CustomDataInput *input);

private:
    void _livingUIDFunc(CustomDataInput *input);

    void _livingPositionFunc(CustomDataInput *input);
};

#endif