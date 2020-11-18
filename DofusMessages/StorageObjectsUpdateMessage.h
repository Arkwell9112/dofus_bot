#ifndef STORAGEOBJECTSUPDATEMESSAGE_H
#define STORAGEOBJECTSUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class StorageObjectsUpdateMessage : public DeserializeInterface {
public:
    std::vector<ObjectItem> objectList;

    void deserialize(CustomDataInput *input);

private:
};

#endif