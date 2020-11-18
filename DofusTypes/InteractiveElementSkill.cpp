#include "InteractiveElementSkill.h"
#include "InteractiveElement.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void InteractiveElementSkill::deserialize(CustomDataInput *input) {
    this->_skillIdFunc(input);
    this->_skillInstanceUidFunc(input);
}

void InteractiveElementSkill::_skillIdFunc(CustomDataInput *input) {
    this->skillId = input->readVarUhInt();
    if (this->skillId < 0) {

    }
}

void InteractiveElementSkill::_skillInstanceUidFunc(CustomDataInput *input) {
    this->skillInstanceUid = input->readInt();
    if (this->skillInstanceUid < 0) {

    }
}
