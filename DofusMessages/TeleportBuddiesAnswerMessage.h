#ifndef TELEPORTBUDDIESANSWERMESSAGE_H
#define TELEPORTBUDDIESANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportBuddiesAnswerMessage : public DeserializeInterface {
public:
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif