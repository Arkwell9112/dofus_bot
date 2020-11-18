#ifndef SHORTCUTOBJECTPRESET_H
#define SHORTCUTOBJECTPRESET_H

#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutObjectPreset : public ShortcutObject {
public:
    int presetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif