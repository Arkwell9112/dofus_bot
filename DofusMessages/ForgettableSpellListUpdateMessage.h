#ifndef FORGETTABLESPELLLISTUPDATEMESSAGE_H
#define FORGETTABLESPELLLISTUPDATEMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Item.h"

#include "../DofusTypes/ForgettableSpellItem.h"

#include <string>
#include <vector>

class ForgettableSpellListUpdateMessage : public DeserializeInterface {
public:
    unsigned int action = 0;
    std::vector<ForgettableSpellItem> spells;

    void deserialize(CustomDataInput *input);

private:
    void _actionFunc(CustomDataInput *input);
};

#endif