#ifndef SHORTCUTBARCONTENTMESSAGE_H
#define SHORTCUTBARCONTENTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarContentMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    std::vector<Shortcut> shortcuts;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);

    void _shortcutsFunc(CustomDataInput *input);
};

#endif