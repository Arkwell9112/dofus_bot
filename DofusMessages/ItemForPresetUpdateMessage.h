#ifndef ITEMFORPRESETUPDATEMESSAGE_H
#define ITEMFORPRESETUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/ItemForPreset.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class ItemForPresetUpdateMessage : public DeserializeInterface {
public:
    int presetId = 0;
    ItemForPreset presetItem;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif