#include "ObjectEffectString.h"
#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffectString::deserialize(CustomDataInput *input) {
    ObjectEffect::deserialize(input);
    this->_valueFunc(input);
}

void ObjectEffectString::_valueFunc(CustomDataInput *input) {
    this->value = input->readUTF();
}
