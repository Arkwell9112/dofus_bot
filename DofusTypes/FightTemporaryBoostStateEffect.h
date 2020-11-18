#ifndef FIGHTTEMPORARYBOOSTSTATEEFFECT_H
#define FIGHTTEMPORARYBOOSTSTATEEFFECT_H

#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTemporaryBoostStateEffect : public FightTemporaryBoostEffect {
public:
    int stateId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _stateIdFunc(CustomDataInput *input);
};

#endif