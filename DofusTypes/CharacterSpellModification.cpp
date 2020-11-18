#include "CharacterSpellModification.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterSpellModification::deserialize(CustomDataInput *input) {
    this->_modificationTypeFunc(input);
    this->_spellIdFunc(input);
    this->value.deserialize(input);
}

void CharacterSpellModification::_modificationTypeFunc(CustomDataInput *input) {
    this->modificationType = input->readByte();
    if (this->modificationType < 0) {

    }
}

void CharacterSpellModification::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}
