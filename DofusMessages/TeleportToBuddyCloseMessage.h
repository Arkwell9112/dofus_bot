#ifndef TELEPORTTOBUDDYCLOSEMESSAGE_H
#define TELEPORTTOBUDDYCLOSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportToBuddyCloseMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _buddyIdFunc(CustomDataInput *input);
};

#endif