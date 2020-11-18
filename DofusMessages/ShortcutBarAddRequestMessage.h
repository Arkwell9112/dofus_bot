#ifndef SHORTCUTBARADDREQUESTMESSAGE_H
#define SHORTCUTBARADDREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarAddRequestMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);
};

#endif