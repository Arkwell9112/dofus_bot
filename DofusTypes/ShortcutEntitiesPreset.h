#ifndef SHORTCUTENTITIESPRESET_H
#define SHORTCUTENTITIESPRESET_H

#include "Shortcut.h"
#include "Preset.h"
#include "EntitiesPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutEntitiesPreset : public Shortcut {
public:
    int presetId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _presetIdFunc(CustomDataInput *input);
};

#endif