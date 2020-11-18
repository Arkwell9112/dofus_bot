#ifndef TELEPORTDESTINATIONSMESSAGE_H
#define TELEPORTDESTINATIONSMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TeleportDestination.h"

#include <string>
#include <vector>

class TeleportDestinationsMessage : public DeserializeInterface {
public:
    unsigned int type = 0;
    std::vector<TeleportDestination> destinations;

    void deserialize(CustomDataInput *input);

private:
    void _typeFunc(CustomDataInput *input);
};

#endif