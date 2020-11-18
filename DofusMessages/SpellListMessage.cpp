#include "SpellListMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Item.h"

void SpellListMessage::deserialize(CustomDataInput *input) {
    SpellItem _item2;
    this->_spellPrevisualizationFunc(input);
    unsigned int _spellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _item2.deserialize(input);
        this->spells.push_back(_item2);
    }
}

void SpellListMessage::_spellPrevisualizationFunc(CustomDataInput *input) {
    this->spellPrevisualization = input->readBoolean();
}
