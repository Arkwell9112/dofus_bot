#ifndef SHORTCUTEMOTE_H
#define SHORTCUTEMOTE_H

#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutEmote : public Shortcut {
public:
    unsigned int emoteId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _emoteIdFunc(CustomDataInput *input);
};

#endif