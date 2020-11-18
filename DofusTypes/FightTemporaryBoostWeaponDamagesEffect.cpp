#include "FightTemporaryBoostWeaponDamagesEffect.h"
#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTemporaryBoostWeaponDamagesEffect::deserialize(CustomDataInput *input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_weaponTypeIdFunc(input);
}

void FightTemporaryBoostWeaponDamagesEffect::_weaponTypeIdFunc(CustomDataInput *input) {
    this->weaponTypeId = input->readShort();
}
