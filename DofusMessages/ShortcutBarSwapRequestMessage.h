#ifndef SHORTCUTBARSWAPREQUESTMESSAGE_H
#define SHORTCUTBARSWAPREQUESTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

#include <string>
#include <vector>

class ShortcutBarSwapRequestMessage : public DeserializeInterface {
public:
    unsigned int barType = 0;
    unsigned int firstSlot = 0;
    unsigned int secondSlot = 0;

    void deserialize(CustomDataInput *input);

private:
    void _barTypeFunc(CustomDataInput *input);

    void _firstSlotFunc(CustomDataInput *input);

    void _secondSlotFunc(CustomDataInput *input);
};

#endif