#ifndef SPELLITEM_H
#define SPELLITEM_H

#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class SpellItem : public Item {
public:
    int spellId = 0;
    int spellLevel = 0;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _spellLevelFunc(CustomDataInput *input);
};

#endif