#include "WatchInventoryContentMessage.h"
#include "InventoryContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WatchInventoryContentMessage::deserialize(CustomDataInput *input) {
    InventoryContentMessage::deserialize(input);
}