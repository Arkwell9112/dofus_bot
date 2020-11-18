#ifndef SHORTCUTBARREMOVEREQUESTMESSAGE_H
#define SHORTCUTBARREMOVEREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarRemoveRequestMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    unsigned int slot = 0;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);

    void _slotFunc(CustomDataInput *input);
};

#endif