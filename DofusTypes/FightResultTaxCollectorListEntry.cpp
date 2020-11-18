#include "FightResultTaxCollectorListEntry.h"
#include "FightResultFighterListEntry.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightResultTaxCollectorListEntry::deserialize(CustomDataInput *input) {
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
    this->guildInfo.deserialize(input);
    this->_experienceForGuildFunc(input);
}

void FightResultTaxCollectorListEntry::_levelFunc(CustomDataInput *input) {
    this->level = input->readUnsignedByte();
    if (this->level < 1 || this->level > 200) {

    }
}

void FightResultTaxCollectorListEntry::_experienceForGuildFunc(CustomDataInput *input) {
    this->experienceForGuild = input->readInt();
}
