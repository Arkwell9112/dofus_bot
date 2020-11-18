#include "ObjectEffectCreature.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectCreature::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_monsterFamilyIdFunc(input);
}

void ObjectEffectCreature::_monsterFamilyIdFunc(CustomDataInput *input) {
    this->monsterFamilyId = input->readVarUhShort();
    if (this->monsterFamilyId < 0) {

    }
}
