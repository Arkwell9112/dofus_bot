#include "SpellsPreset.h"
#include "SpellForPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpellsPreset::deserialize(CustomDataInput *input) {
    SpellForPreset _item1;
    Preset::deserialize(input);
    unsigned int _spellsLen = input->readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _spellsLen; _i1++) {
        _item1.deserialize(input);
        this->spells.push_back(_item1);
    }
}