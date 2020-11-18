#ifndef MOUNTRELEASEDMESSAGE_H
#define MOUNTRELEASEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class MountReleasedMessage : public DeserializeInterface {
public:
    int mountId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _mountIdFunc(CustomDataInput *input);
};

#endif