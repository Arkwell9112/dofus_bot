#ifndef SHORTCUTBARREFRESHMESSAGE_H
#define SHORTCUTBARREFRESHMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarRefreshMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);
};

#endif