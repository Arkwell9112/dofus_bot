#ifndef SHORTCUTSMILEY_H
#define SHORTCUTSMILEY_H

#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutSmiley : public Shortcut {
public:
    unsigned int smileyId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _smileyIdFunc(CustomDataInput *input);
};

#endif