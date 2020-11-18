#ifndef ITEMDURABILITY_H
#define ITEMDURABILITY_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ItemDurability : public DeserializeInterface {
public:
    int durability = 0;
    int durabilityMax = 0;

    void deserialize(CustomDataInput *input);

private:
    void _durabilityFunc(CustomDataInput *input);

    void _durabilityMaxFunc(CustomDataInput *input);
};

#endif