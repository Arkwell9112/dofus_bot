#include "ObjectEffectLadder.h"
#include "ObjectEffectCreature.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectLadder::deserialize(CustomDataInput *input) {
    ObjectEffectCreature::deserialize(input);
    this->_monsterCountFunc(input);
}

void ObjectEffectLadder::_monsterCountFunc(CustomDataInput *input) {
    this->monsterCount = input->readVarUhInt();
    if (this->monsterCount < 0) {

    }
}
