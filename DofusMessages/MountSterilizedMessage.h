#ifndef MOUNTSTERILIZEDMESSAGE_H
#define MOUNTSTERILIZEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountSterilizedMessage : public DeserializeInterface {
public:
    int mountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mountIdFunc(CustomDataInput *input);
};

#endif