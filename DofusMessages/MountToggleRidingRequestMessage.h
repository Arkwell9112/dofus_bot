#ifndef MOUNTTOGGLERIDINGREQUESTMESSAGE_H
#define MOUNTTOGGLERIDINGREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountToggleRidingRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif