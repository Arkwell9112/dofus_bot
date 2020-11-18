#ifndef WATCHINVENTORYCONTENTMESSAGE_H
#define WATCHINVENTORYCONTENTMESSAGE_H

#include "InventoryContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class WatchInventoryContentMessage : public InventoryContentMessage {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif