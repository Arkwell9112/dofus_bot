#ifndef TELEPORTHAVENBAGREQUESTMESSAGE_H
#define TELEPORTHAVENBAGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportHavenBagRequestMessage : public DeserializeInterface {
public:
    double guestId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _guestIdFunc(CustomDataInput *input);
};

#endif