#ifndef SHORTCUTSPELL_H
#define SHORTCUTSPELL_H

#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutSpell : public Shortcut {
public:
    unsigned int spellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);
};

#endif