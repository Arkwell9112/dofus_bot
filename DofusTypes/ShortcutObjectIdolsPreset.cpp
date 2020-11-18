#include "ShortcutObjectIdolsPreset.h"
#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"
#include "IdolsPreset.h"
#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutObjectIdolsPreset::deserialize(CustomDataInput *input) {
    ShortcutObject::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutObjectIdolsPreset::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
