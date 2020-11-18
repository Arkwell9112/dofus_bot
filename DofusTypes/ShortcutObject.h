#ifndef SHORTCUTOBJECT_H
#define SHORTCUTOBJECT_H

#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ShortcutObject : public Shortcut {
public:
    void deserialize(CustomDataInput *input);

private:
};

#endif