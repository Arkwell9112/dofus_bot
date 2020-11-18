#include "GuildSpellUpgradeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GuildSpellUpgradeRequestMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
}

void GuildSpellUpgradeRequestMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readInt();
    if (this->spellId < 0) {

    }
}
