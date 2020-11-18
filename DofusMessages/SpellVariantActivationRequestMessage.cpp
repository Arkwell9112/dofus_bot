#include "SpellVariantActivationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpellVariantActivationRequestMessage::deserialize(CustomDataInput *input) {
    this->_spellIdFunc(input);
}

void SpellVariantActivationRequestMessage::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readVarUhShort();
    if (this->spellId < 0) {

    }
}
