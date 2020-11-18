#include "SpellVariantActivationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpellVariantActivationMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
    this->_resultFunc(input);
}

void SpellVariantActivationMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}

void SpellVariantActivationMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readBoolean();
}
