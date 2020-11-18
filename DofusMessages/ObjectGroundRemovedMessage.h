#ifndef OBJECTGROUNDREMOVEDMESSAGE_H
#define OBJECTGROUNDREMOVEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectGroundRemovedMessage : public DeserializeInterface {
public:
    unsigned int cell = 0;

    void deserialize(CustomDataInput *input);

private:
    void _cellFunc(CustomDataInput *input);
};

#endif