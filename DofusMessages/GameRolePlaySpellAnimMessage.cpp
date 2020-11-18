#include "GameRolePlaySpellAnimMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlaySpellAnimMessage::deserialize(CustomDataInput *input) {
    this->_casterIdFunc(input);
    this->_targetCellIdFunc(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
}

void GameRolePlaySpellAnimMessage::_casterIdFunc(CustomDataInput *input) {
    this->casterId = input->readVarUhLong();
    if (this->casterId < 0 || this->casterId > 9007199254740990) {

    }
}

void GameRolePlaySpellAnimMessage::_targetCellIdFunc(CustomDataInput *input) {
    this->targetCellId = input->readVarUhShort();
    if (this->targetCellId < 0 || this->targetCellId > 559) {

    }
}

void GameRolePlaySpellAnimMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void GameRolePlaySpellAnimMessage::_spellLevelFunc(CustomDataInput *input) {
    this->spellLevel = input->readShort();
    if (this->spellLevel < 1 || this->spellLevel > 32767) {

    }
}
