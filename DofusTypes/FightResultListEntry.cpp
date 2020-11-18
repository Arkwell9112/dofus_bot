#include "FightResultListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultListEntry::deserialize(CustomDataInput *input) {
    this->_outcomeFunc(input);
    this->_waveFunc(input);
    this->rewards.deserialize(input);
}

void FightResultListEntry::_outcomeFunc(CustomDataInput *input) {
    this->outcome = input->readVarUhShort();
    if (this->outcome < 0) {

    }
}

void FightResultListEntry::_waveFunc(CustomDataInput *input) {
    this->wave = input->readByte();
    if (this->wave < 0) {

    }
}
