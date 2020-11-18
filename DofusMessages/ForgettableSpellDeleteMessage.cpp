#include "ForgettableSpellDeleteMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ForgettableSpellDeleteMessage::deserialize(CustomDataInput *input) {
    unsigned int _val2 = 0;
    this->_reasonFunc(input);
    unsigned int _spellsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _val2 = input->readInt();
        if (_val2 < 0) {

        }
        this->spells.push_back(_val2);
    }
}

void ForgettableSpellDeleteMessage::_reasonFunc(CustomDataInput *input) {
    this->reason = input->readByte();
    if (this->reason < 0) {

    }
}

void ForgettableSpellDeleteMessage::_spellsFunc(CustomDataInput *input) {
    unsigned int _val = input->readInt();
    if (_val < 0) {

    }
    this->spells.push_back(_val);
}
