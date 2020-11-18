#include "GameActionFightDispellSpellMessage.h"
#include "GameActionFightDispellMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightDispellSpellMessage::deserialize(CustomDataInput *input) {
    GameActionFightDispellMessage::deserialize(input);
    this->_spellIdFunc(input);
}

void GameActionFightDispellSpellMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}
