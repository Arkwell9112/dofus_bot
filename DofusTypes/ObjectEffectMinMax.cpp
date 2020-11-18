#include "ObjectEffectMinMax.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectMinMax::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_minFunc(input);
    this->_maxFunc(input);
}

void ObjectEffectMinMax::_minFunc(CustomDataInput *input) {
    this->min = input->readVarUhInt();
    if (this->min < 0) {

    }
}

void ObjectEffectMinMax::_maxFunc(CustomDataInput *input) {
    this->max = input->readVarUhInt();
    if (this->max < 0) {

    }
}
