#ifndef TELEPORTBUDDIESREQUESTEDMESSAGE_H
#define TELEPORTBUDDIESREQUESTEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportBuddiesRequestedMessage : public DeserializeInterface {
public:
    unsigned int dungeonId = 0;
    double inviterId = 0;
    std::vector<double> invalidBuddiesIds;

    void deserialize(CustomDataInput *input);

private:
    void _dungeonIdFunc(CustomDataInput *input);

    void _inviterIdFunc(CustomDataInput *input);

    void _invalidBuddiesIdsFunc(CustomDataInput *input);
};

#endif