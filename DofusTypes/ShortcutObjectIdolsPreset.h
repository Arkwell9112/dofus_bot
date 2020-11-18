#ifndef SHORTCUTOBJECTIDOLSPRESET_H
#define SHORTCUTOBJECTIDOLSPRESET_H

#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"
#include "IdolsPreset.h"
#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutObjectIdolsPreset : public ShortcutObject {
public:
    int presetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif