#include "StatsUpgradeResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatsUpgradeResultMessage::deserialize(CustomDataInput *input) {
    this->_resultFunc(input);
    this->_nbCharacBoostFunc(input);
}

void StatsUpgradeResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
}

void StatsUpgradeResultMessage::_nbCharacBoostFunc(CustomDataInput *input) {
    this->nbCharacBoost = input->readVarUhShort();
    if (this->nbCharacBoost < 0) {

    }
}
