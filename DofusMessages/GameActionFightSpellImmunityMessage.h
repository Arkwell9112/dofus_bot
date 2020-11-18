#ifndef GAMEACTIONFIGHTSPELLIMMUNITYMESSAGE_H
#define GAMEACTIONFIGHTSPELLIMMUNITYMESSAGE_H

#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class GameActionFightSpellImmunityMessage : public AbstractGameActionMessage {
public:
    double targetId = 0;
    unsigned int spellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _targetIdFunc(CustomDataInput *input);

    void _spellIdFunc(CustomDataInput *input);
};

#endif