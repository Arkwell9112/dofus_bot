#ifndef TELEPORTREQUESTMESSAGE_H
#define TELEPORTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportRequestMessage : public DeserializeInterface {
public:
    unsigned int sourceType = 0;
    unsigned int destinationType = 0;
    double mapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _sourceTypeFunc(CustomDataInput *input);

    void _destinationTypeFunc(CustomDataInput *input);

    void _mapIdFunc(CustomDataInput *input);
};

#endif