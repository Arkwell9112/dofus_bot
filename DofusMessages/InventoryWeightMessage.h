#ifndef INVENTORYWEIGHTMESSAGE_H
#define INVENTORYWEIGHTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class InventoryWeightMessage : public DeserializeInterface {
public:
    unsigned int inventoryWeight = 0;
    unsigned int shopWeight = 0;
    unsigned int weightMax = 0;

    void deserialize(CustomDataInput *input);

private:
    void _inventoryWeightFunc(CustomDataInput *input);

    void _shopWeightFunc(CustomDataInput *input);

    void _weightMaxFunc(CustomDataInput *input);
};

#endif