#ifndef SHORTCUTBARREPLACEDMESSAGE_H
#define SHORTCUTBARREPLACEDMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarReplacedMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);
};

#endif