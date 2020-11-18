#include "ShortcutSpell.h"
#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutSpell::deserialize(CustomDataInput *input) {
    Shortcut::deserialize(input);
    this->_spellIdFunc(input);
}

void ShortcutSpell::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}
