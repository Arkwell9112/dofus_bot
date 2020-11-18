#ifndef STORAGEOBJECTREMOVEMESSAGE_H
#define STORAGEOBJECTREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StorageObjectRemoveMessage : public DeserializeInterface {
public:
    unsigned int objectUID = 0;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDFunc(CustomDataInput *input);
};

#endif