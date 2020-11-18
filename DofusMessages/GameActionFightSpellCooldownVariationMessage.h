#ifndef GAMEACTIONFIGHTSPELLCOOLDOWNVARIATIONMESSAGE_H
#define GAMEACTIONFIGHTSPELLCOOLDOWNVARIATIONMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightSpellCooldownVariationMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int spellId = 0;
    int value = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);

    void _valueFunc(CustomDataInput *input);
};

#endif