#ifndef SPELLSPRESET_H
#define SPELLSPRESET_H

#include "SpellForPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpellsPreset : public Preset {
public:
    std::vector<SpellForPreset> spells;

    void deserialize(CustomDataInput *input);

private:
};

#endif