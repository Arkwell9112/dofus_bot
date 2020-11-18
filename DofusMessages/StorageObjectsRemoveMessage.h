#ifndef STORAGEOBJECTSREMOVEMESSAGE_H
#define STORAGEOBJECTSREMOVEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StorageObjectsRemoveMessage : public DeserializeInterface {
public:
    std::vector<unsigned int> objectUIDList;

    void deserialize(CustomDataInput *input);

private:
    void _objectUIDListFunc(CustomDataInput *input);
};

#endif