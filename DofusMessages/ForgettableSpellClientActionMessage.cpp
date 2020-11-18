#include "ForgettableSpellClientActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ForgettableSpellClientActionMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
    this->_actionFunc(input);
}

void ForgettableSpellClientActionMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readInt();
    if (this->spellId < 0) {

    }
}

void ForgettableSpellClientActionMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}
