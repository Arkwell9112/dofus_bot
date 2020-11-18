#include "FightTemporaryBoostStateEffect.h"
#include "FightTemporaryBoostEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightTemporaryBoostStateEffect::deserialize(CustomDataInput *input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_stateIdFunc(input);
}

void FightTemporaryBoostStateEffect::_stateIdFunc(CustomDataInput *input) {
    this->stateId = input->readShort();
}
