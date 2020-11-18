#include "InteractiveElementSkill.h"
#include "InteractiveElementNamedSkill.h"
#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveElementNamedSkill::deserialize(CustomDataInput *input) {
    InteractiveElementSkill::deserialize(input);
    this->_nameIdFunc(input);
}

void InteractiveElementNamedSkill::_nameIdFunc(CustomDataInput *input) {
    this->nameId = input->readVarUhInt();
    if (this->nameId < 0) {

    }
}
