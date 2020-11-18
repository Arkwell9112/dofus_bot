#include "ShortcutEntitiesPreset.h"
#include "Shortcut.h"
#include "Preset.h"
#include "EntitiesPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutEntitiesPreset::deserialize(CustomDataInput *input) {
    Shortcut::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutEntitiesPreset::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
