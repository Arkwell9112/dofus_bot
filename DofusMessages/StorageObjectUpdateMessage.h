#ifndef STORAGEOBJECTUPDATEMESSAGE_H
#define STORAGEOBJECTUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class StorageObjectUpdateMessage : public DeserializeInterface {
public:
    ObjectItem object;

    void deserialize(CustomDataInput *input);

private:
};

#endif