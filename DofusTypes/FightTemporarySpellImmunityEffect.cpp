#include "FightTemporarySpellImmunityEffect.h"
#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTemporarySpellImmunityEffect::deserialize(CustomDataInput *input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_immuneSpellIdFunc(input);
}

void FightTemporarySpellImmunityEffect::_immuneSpellIdFunc(CustomDataInput *input) {
    this->immuneSpellId = input->readInt();
}
