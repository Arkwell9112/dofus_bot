#include "StatsUpgradeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void StatsUpgradeRequestMessage::deserialize(CustomDataInput *input) {
    this->_useAdditionnalFunc(input);
    this->_statIdFunc(input);
    this->_boostPointFunc(input);
}

void StatsUpgradeRequestMessage::_useAdditionnalFunc(CustomDataInput *input) {
    this->useAdditionnal = input->readBoolean();
}

void StatsUpgradeRequestMessage::_statIdFunc(CustomDataInput *input) {
    this->statId = input->readByte();
    if (this->statId < 0) {

    }
}

void StatsUpgradeRequestMessage::_boostPointFunc(CustomDataInput *input) {
    this->boostPoint = input->readVarUhShort();
    if (this->boostPoint < 0) {

    }
}
