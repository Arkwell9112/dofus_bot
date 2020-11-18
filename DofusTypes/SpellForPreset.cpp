#include "SpellForPreset.h"
#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpellForPreset::deserialize(CustomDataInput *input) {
    int _val2 = 0;
    this->_spellIdFunc(input);
    unsigned int _shortcutsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _shortcutsLen; _i2++) {
        _val2 = input->readShort();
        this->shortcuts.push_back(_val2);
    }
}

void SpellForPreset::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void SpellForPreset::_shortcutsFunc(CustomDataInput *input) {
    int _val = input->readShort();
    this->shortcuts.push_back(_val);
}
