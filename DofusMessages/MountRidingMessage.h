#ifndef MOUNTRIDINGMESSAGE_H
#define MOUNTRIDINGMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountRidingMessage : public DeserializeInterface {
public:
    bool isRiding = false;
    bool isAutopilot = false;

    void deserialize(CustomDataInput *input);

private:
    void deserializeByteBoxes(CustomDataInput *input);
};

#endif