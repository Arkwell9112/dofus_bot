#ifndef TELEPORTBUDDIESMESSAGE_H
#define TELEPORTBUDDIESMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportBuddiesMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);
};

#endif