#ifndef FIGHTTEMPORARYBOOSTWEAPONDAMAGESEFFECT_H
#define FIGHTTEMPORARYBOOSTWEAPONDAMAGESEFFECT_H

#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include <string>
#include <vector>

class FightTemporaryBoostWeaponDamagesEffect : public FightTemporaryBoostEffect {
public:
    int weaponTypeId = 0;

    void deserialize(CustomDataInput *input);

private:
    void _weaponTypeIdFunc(CustomDataInput *input);
};

#endif