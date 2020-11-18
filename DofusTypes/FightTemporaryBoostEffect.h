#ifndef FIGHTTEMPORARYBOOSTEFFECT_H
#define FIGHTTEMPORARYBOOSTEFFECT_H

#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTemporaryBoostEffect : public AbstractFightDispellableEffect {
public:
    int delta = 0;

    void deserialize(CustomDataInput *input);

private:
    void _deltaFunc(CustomDataInput *input);
};

#endif