#include "GameActionFightSpellCooldownVariationMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightSpellCooldownVariationMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_spellIdFunc(input);
    this->_valueFunc(input);
}

void GameActionFightSpellCooldownVariationMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightSpellCooldownVariationMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void GameActionFightSpellCooldownVariationMessage::_valueFunc(CustomDataInput *input) {
    this->value = input->readVarShort();
}
