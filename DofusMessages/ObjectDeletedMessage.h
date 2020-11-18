#ifndef OBJECTDELETEDMESSAGE_H
#define OBJECTDELETEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectDeletedMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif