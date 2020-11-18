#ifndef MOUNTUNSETMESSAGE_H
#define MOUNTUNSETMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountUnSetMessage : public DeserializeInterface {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif