#include "GameActionFightNoSpellCastMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightNoSpellCastMessage::deserialize(CustomDataInput *input) {
    this->_spellLevelIdFunc(input);
}

void GameActionFightNoSpellCastMessage::_spellLevelIdFunc(CustomDataInput *input) {
    this->spellLevelId = input->readVarUhInt();
    if (this->spellLevelId < 0) {

    }
}
