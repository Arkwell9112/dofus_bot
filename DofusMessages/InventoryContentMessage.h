#ifndef INVENTORYCONTENTMESSAGE_H
#define INVENTORYCONTENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/ObjectItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class InventoryContentMessage : public DeserializeInterface {
public:
    std::vector<ObjectItem> objects;
    double kamas = 0;

    void deserialize(CustomDataInput *input);

private:
    void _kamasFunc(CustomDataInput *input);
};

#endif