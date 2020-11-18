#ifndef OBJECTSDELETEDMESSAGE_H
#define OBJECTSDELETEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ObjectsDeletedMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> objectUID;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif