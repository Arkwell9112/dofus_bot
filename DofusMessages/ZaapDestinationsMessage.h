#ifndef ZAAPDESTINATIONSMESSAGE_H
#define ZAAPDESTINATIONSMESSAGE_H

#include "TeleportDestinationsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/TeleportDestination.h"

#include <string>
#include <vector>

class ZaapDestinationsMessage : public TeleportDestinationsMessage {
public:
    double spawnMapId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spawnMapIdFunc(CustomDataInput *input);
};

#endif