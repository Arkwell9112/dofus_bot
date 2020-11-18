#include "FightTemporarySpellBoostEffect.h"
#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTemporarySpellBoostEffect::deserialize(CustomDataInput *input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_boostedSpellIdFunc(input);
}

void FightTemporarySpellBoostEffect::_boostedSpellIdFunc(CustomDataInput *input) {
    this->boostedSpellId = input->readVarUhShort();
    if (this->boostedSpellId < 0) {

    }
}
