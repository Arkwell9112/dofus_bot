#ifndef FORGETTABLESPELLSPRESET_H
#define FORGETTABLESPELLSPRESET_H

#include "SpellsPreset.h"
#include "SpellForPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ForgettableSpellsPreset : public Preset {
public:
    SpellsPreset baseSpellsPreset;
    std::vector<SpellForPreset> forgettableSpells;

    void deserialize(CustomDataInput *input);

private:
};

#endif