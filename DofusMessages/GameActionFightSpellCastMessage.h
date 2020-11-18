#ifndef GAMEACTIONFIGHTSPELLCASTMESSAGE_H
#define GAMEACTIONFIGHTSPELLCASTMESSAGE_H

#include "AbstractGameActionFightTargetedAbilityMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightSpellCastMessage : public AbstractGameActionFightTargetedAbilityMessage {
public:
    unsigned int spellId = 0;
    int spellLevel = 0;
    std::vector<int> portalsIds;

    void deserialize(CustomDataInput *input);

private:
    void _spellIdFunc(CustomDataInput *input);

    void _spellLevelFunc(CustomDataInput *input);

    void _portalsIdsFunc(CustomDataInput *input);
};

#endif