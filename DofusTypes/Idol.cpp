#include "Idol.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void Idol::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_xpBonusPercentFunc(input);
    this->_dropBonusPercentFunc(input);
}

void Idol::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhShort();
    if (this->id < 0) {

    }
}

void Idol::_xpBonusPercentFunc(CustomDataInput *input) {
    this->xpBonusPercent = input->readVarUhShort();
    if (this->xpBonusPercent < 0) {

    }
}

void Idol::_dropBonusPercentFunc(CustomDataInput *input) {
    this->dropBonusPercent = input->readVarUhShort();
    if (this->dropBonusPercent < 0) {

    }
}
