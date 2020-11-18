#include "StorageInventoryContentMessage.h"
#include "InventoryContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StorageInventoryContentMessage::deserialize(CustomDataInput *input) {
    InventoryContentMessage::deserialize(input);
}