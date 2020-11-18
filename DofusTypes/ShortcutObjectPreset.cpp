#include "ShortcutObjectPreset.h"
#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutObjectPreset::deserialize(CustomDataInput *input) {
    ShortcutObject::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutObjectPreset::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
