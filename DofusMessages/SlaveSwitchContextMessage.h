#ifndef SLAVESWITCHCONTEXTMESSAGE_H
#define SLAVESWITCHCONTEXTMESSAGE_H

#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Shortcut.h"

#include "../DofusTypes/Item.h"

#include "../DofusTypes/CharacterCharacteristicsInformations.h"

#include <string>
#include <vector>

class SlaveSwitchContextMessage : public DeserializeInterface {
public:
    double masterId = 0;
    double slaveId = 0;
    std::vector<SpellItem> slaveSpells;
    CharacterCharacteristicsInformations slaveStats;
    std::vector<Shortcut> shortcuts;

    void deserialize(CustomDataInput *input);

private:
    void _masterIdFunc(CustomDataInput *input);

    void _slaveIdFunc(CustomDataInput *input);

    void _shortcutsFunc(CustomDataInput *input);
};

#endif