#include "SlaveSwitchContextMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/SpellItem.h"

#include "../DofusTypes/Shortcut.h"

#include "../DofusTypes/Item.h"

void SlaveSwitchContextMessage::deserialize(CustomDataInput *input) {
    SpellItem _item3;
    unsigned int _id5 = 0;
    Shortcut _item5;
    this->_masterIdFunc(input);
    this->_slaveIdFunc(input);
    unsigned int _slaveSpellsLen = input->readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _slaveSpellsLen; _i3++) {
        _item3.deserialize(input);
        this->slaveSpells.push_back(_item3);
    }
    this->slaveStats.deserialize(input);
    unsigned int _shortcutsLen = input->readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _shortcutsLen; _i5++) {
        _id5 = input->readUnsignedShort();
        _item5 = *dynamic_cast<Shortcut *>(ProtocolTypeManager::getInstance(_id5, input));
        ProtocolTypeManager::deleteLastInstance();

        this->shortcuts.push_back(_item5);
    }
}

void SlaveSwitchContextMessage::_masterIdFunc(CustomDataInput *input) {
    this->masterId = input->readDouble();
    if (this->masterId < -9007199254740990 || this->masterId > 9007199254740990) {

    }
}

void SlaveSwitchContextMessage::_slaveIdFunc(CustomDataInput *input) {
    this->slaveId = input->readDouble();
    if (this->slaveId < -9007199254740990 || this->slaveId > 9007199254740990) {

    }
}

void SlaveSwitchContextMessage::_shortcutsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    Shortcut _item;
    _item.deserialize(input);
    this->shortcuts.push_back(_item);
}
