#include "SpellItem.h"
#include "Item.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SpellItem::deserialize(CustomDataInput *input) {
    Item::deserialize(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
}

void SpellItem::_spellIdFunc(CustomDataInput *input) {
    this->spellId = input->readInt();
}

void SpellItem::_spellLevelFunc(CustomDataInput *input) {
    this->spellLevel = input->readShort();
    if (this->spellLevel < 1 || this->spellLevel > 32767) {

    }
}
