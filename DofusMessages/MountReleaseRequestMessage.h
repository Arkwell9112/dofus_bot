#ifndef MOUNTRELEASEREQUESTMESSAGE_H
#define MOUNTRELEASEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountReleaseRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif