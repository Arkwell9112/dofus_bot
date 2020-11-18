#include "ObjectEffectInteger.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectInteger::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_valueFunc(input);
}

void ObjectEffectInteger::_valueFunc(CustomDataInput *input) {
    this->value = input->readVarUhInt();
    if (this->value < 0) {

    }
}
