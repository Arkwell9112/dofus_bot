#ifndef MOUNTHARNESSDISSOCIATEREQUESTMESSAGE_H
#define MOUNTHARNESSDISSOCIATEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountHarnessDissociateRequestMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif