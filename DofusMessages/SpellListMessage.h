#ifndef SPELLLISTMESSAGE_H
#define SPELLLISTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Item.h"

#include <string>
#include <vector>

class SpellListMessage : public DeserializeInterface {
public:
    bool spellPrevisualization = false;
    std::vector<SpellItem> spells;

    void deserialize(CustomDataInput *input);

private:
    void _spellPrevisualizationFunc(CustomDataInput *input);
};

#endif