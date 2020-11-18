#ifndef SPELLFORPRESET_H
#define SPELLFORPRESET_H

#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpellForPreset : public DeserializeInterface {
public:
    unsigned int spellId = 0;
    std::vector<int> shortcuts;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _shortcutsFunc(CustomDataInput *input);
};

#endif