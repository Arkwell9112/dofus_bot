#ifndef FIGHTTEMPORARYSPELLIMMUNITYEFFECT_H
#define FIGHTTEMPORARYSPELLIMMUNITYEFFECT_H

#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTemporarySpellImmunityEffect : public AbstractFightDispellableEffect {
public:
    int immuneSpellId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _immuneSpellIdFunc(CustomDataInput *input);
};

#endif