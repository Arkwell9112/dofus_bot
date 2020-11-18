#include "MonsterInGroupLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MonsterInGroupLightInformations::deserialize(CustomDataInput *input) {
    this->_genericIdFunc(input);
    this->_gradeFunc(input);
    this->_levelFunc(input);
}

void MonsterInGroupLightInformations::_genericIdFunc(CustomDataInput *input) {
    this->genericId = input->readInt();
}

void MonsterInGroupLightInformations::_gradeFunc(CustomDataInput *input) {
    this->grade = input->readByte();
    if (this->grade < 0) {

    }
}

void MonsterInGroupLightInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readShort();
    if (this->level < 0) {

    }
}
