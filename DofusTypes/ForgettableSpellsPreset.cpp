#include "SpellsPreset.h"
#include "SpellForPreset.h"
#include "Preset.h"
#include "ForgettableSpellsPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ForgettableSpellsPreset::deserialize(CustomDataInput *input) {
    SpellForPreset _item2;
    Preset::deserialize(input);
    this->baseSpellsPreset.deserialize(input);
    unsigned int _forgettableSpellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _forgettableSpellsLen; _i2++) {
        _item2.deserialize(input);
        this->forgettableSpells.push_back(_item2);
    }
}