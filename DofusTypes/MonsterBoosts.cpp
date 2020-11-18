#include "MonsterBoosts.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MonsterBoosts::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_xpBoostFunc(input);
    this->_dropBoostFunc(input);
}

void MonsterBoosts::_idFunc(CustomDataInput *input) {
    this->id = input->readVarUhInt();
    if (this->id < 0) {

    }
}

void MonsterBoosts::_xpBoostFunc(CustomDataInput *input) {
    this->xpBoost = input->readVarUhShort();
    if (this->xpBoost < 0) {

    }
}

void MonsterBoosts::_dropBoostFunc(CustomDataInput *input) {
    this->dropBoost = input->readVarUhShort();
    if (this->dropBoost < 0) {

    }
}
