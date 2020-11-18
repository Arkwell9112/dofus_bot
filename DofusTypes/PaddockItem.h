#ifndef PADDOCKITEM_H
#define PADDOCKITEM_H

#include "ObjectItemInRolePlay.h"
#include "ObjectItem.h"
#include "ItemDurability.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class PaddockItem : public ObjectItemInRolePlay {
public:
    ItemDurability durability;

    void deserialize(CustomDataInput *input);

private:
};

#endif