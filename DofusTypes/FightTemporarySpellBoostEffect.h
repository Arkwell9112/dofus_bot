#ifndef FIGHTTEMPORARYSPELLBOOSTEFFECT_H
#define FIGHTTEMPORARYSPELLBOOSTEFFECT_H

#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTemporarySpellBoostEffect : public FightTemporaryBoostEffect {
public:
    unsigned int boostedSpellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _boostedSpellIdFunc(CustomDataInput *input);
};

#endif