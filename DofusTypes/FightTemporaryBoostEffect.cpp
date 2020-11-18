#include "FightTemporaryBoostEffect.h"
#include "AbstractFightDispellableEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTemporaryBoostEffect::deserialize(CustomDataInput *input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_deltaFunc(input);
}

void FightTemporaryBoostEffect::_deltaFunc(CustomDataInput *input) {
    this->delta = input->readInt();
}
