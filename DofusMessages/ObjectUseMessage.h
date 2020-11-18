#ifndef OBJECTUSEMESSAGE_H
#define OBJECTUSEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectUseMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif