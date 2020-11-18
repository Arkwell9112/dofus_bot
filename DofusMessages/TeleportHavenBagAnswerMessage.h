#ifndef TELEPORTHAVENBAGANSWERMESSAGE_H
#define TELEPORTHAVENBAGANSWERMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class TeleportHavenBagAnswerMessage : public DeserializeInterface {
public:
    bool accept = false;

    void deserialize(CustomDataInput *input);

private:
    void _acceptFunc(CustomDataInput *input);
};

#endif