#ifndef JOBALLOWMULTICRAFTREQUESTMESSAGE_H
#define JOBALLOWMULTICRAFTREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class JobAllowMultiCraftRequestMessage : public DeserializeInterface {
public:
    bool enabled = false;

    void deserialize(CustomDataInput *input);

private:
    void _enabledFunc(CustomDataInput *input);
};

#endif