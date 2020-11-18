#ifndef MOUNTSTERILIZEREQUESTMESSAGE_H
#define MOUNTSTERILIZEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountSterilizeRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif