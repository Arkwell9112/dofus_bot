#ifndef FORGETTABLESPELLITEM_H
#define FORGETTABLESPELLITEM_H

#include "SpellItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class ForgettableSpellItem : public SpellItem {
public:
    bool available = false;

    void deserialize(CustomDataInput *input);

private:
    void _availableFunc(CustomDataInput *input);
};

#endif