#include "FightResultListEntry.h"
#include "FightResultFighterListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultFighterListEntry::deserialize(CustomDataInput *input) {
    FightResultListEntry::deserialize(input);
    this->_idFunc(input);
    this->_aliveFunc(input);
}

void FightResultFighterListEntry::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void FightResultFighterListEntry::_aliveFunc(CustomDataInput *input) {
    this->alive = input->readBoolean();
}
