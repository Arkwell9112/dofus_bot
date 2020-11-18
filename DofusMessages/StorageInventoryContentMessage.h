#ifndef STORAGEINVENTORYCONTENTMESSAGE_H
#define STORAGEINVENTORYCONTENTMESSAGE_H

#include "InventoryContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class StorageInventoryContentMessage : public InventoryContentMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif