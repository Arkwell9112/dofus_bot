#ifndef TELEPORTTOBUDDYOFFERMESSAGE_H
#define TELEPORTTOBUDDYOFFERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportToBuddyOfferMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;
    unsigned int timeLeft = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _buddyIdFunc(CustomDataInput *input);

    void _timeLeftFunc(CustomDataInput *input);
};

#endif