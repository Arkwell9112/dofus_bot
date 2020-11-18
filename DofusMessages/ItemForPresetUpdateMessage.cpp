#include "ItemForPresetUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/ItemForPreset.h"

#include "../DofusTypes/Item.h"

void ItemForPresetUpdateMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    this->presetItem.deserialize(input);
}

void ItemForPresetUpdateMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
