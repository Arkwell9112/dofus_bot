#include "GameFightSpellCooldown.h"
#include "GameFightResumeSlaveInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightResumeSlaveInfo::deserialize(CustomDataInput *input) {
    GameFightSpellCooldown _item2;
    this->_slaveIdFunc(input);
    unsigned int _spellCooldownsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellCooldownsLen; _i2++) {
        _item2.deserialize(input);
        this->spellCooldowns.push_back(_item2);
    }
    this->_summonCountFunc(input);
    this->_bombCountFunc(input);
}

void GameFightResumeSlaveInfo::_slaveIdFunc(CustomDataInput *input) {
    this->slaveId = input->readDouble();
    if (this->slaveId < -9007199254740990 || this->slaveId > 9007199254740990) {

    }
}

void GameFightResumeSlaveInfo::_summonCountFunc(CustomDataInput *input) {
    this->summonCount = input->readByte();
    if (this->summonCount < 0) {

    }
}

void GameFightResumeSlaveInfo::_bombCountFunc(CustomDataInput *input) {
    this->bombCount = input->readByte();
    if (this->bombCount < 0) {

    }
}
