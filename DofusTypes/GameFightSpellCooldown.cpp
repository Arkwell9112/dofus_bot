#include "GameFightSpellCooldown.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightSpellCooldown::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
    this->_cooldownFunc(input);
}

void GameFightSpellCooldown::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readInt();
}

void GameFightSpellCooldown::_cooldownFunc(CustomDataInput *input) {
    this->cooldown = input->readByte();
    if (this->cooldown < 0) {

    }
}
