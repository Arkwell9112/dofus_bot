#include "GameActionFightSpellImmunityMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightSpellImmunityMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_spellIdFunc(input);
}

void GameActionFightSpellImmunityMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightSpellImmunityMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}
