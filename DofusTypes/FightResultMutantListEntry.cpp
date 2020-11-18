#include "FightResultMutantListEntry.h"
#include "FightResultFighterListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultMutantListEntry::deserialize(CustomDataInput *input) {
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
}

void FightResultMutantListEntry::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}
