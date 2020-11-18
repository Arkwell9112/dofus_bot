#ifndef TELEPORTTOBUDDYANSWERMESSAGE_H
#define TELEPORTTOBUDDYANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportToBuddyAnswerMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    double buddyId = 0;
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _buddyIdFunc(CustomDataInput *input);

    void _acceptFunc(CustomDataInput *input);
};

#endif