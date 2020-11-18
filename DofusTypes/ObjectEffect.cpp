#include "ObjectEffect.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ObjectEffect::deserialize(CustomDataInput *input) {
    this->_actionIdFunc(input);
}

void ObjectEffect::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readVarUhShort();
    if (this->actionId < 0) {

    }
}
