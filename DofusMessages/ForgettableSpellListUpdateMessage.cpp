#include "ForgettableSpellListUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Item.h"

#include "../DofusTypes/ForgettableSpellItem.h"

void ForgettableSpellListUpdateMessage::deserialize(CustomDataInput *input) {
    ForgettableSpellItem _item2;
    this->_actionFunc(input);
    unsigned int _spellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _item2.deserialize(input);
        this->spells.push_back(_item2);
    }
}

void ForgettableSpellListUpdateMessage::_actionFunc(CustomDataInput *input) {
    this->action = input->readByte();
    if (this->action < 0) {

    }
}
