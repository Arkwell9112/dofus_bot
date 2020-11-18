#ifndef ITEMSPRESET_H
#define ITEMSPRESET_H

#include "Preset.h"
#include "ItemForPreset.h"
#include "Item.h"
#include "EntityLook.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ItemsPreset : public Preset {
public:
    std::vector<ItemForPreset> items;
    bool mountEquipped = false;
    EntityLook look;

    void deserialize(CustomDataInput *input);

private:
    void _mountEquippedFunc(CustomDataInput *input);
};

#endif