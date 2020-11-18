#include "ShortcutBarContentMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarContentMessage::deserialize(CustomDataInput *input) {
    unsigned int _id2 = 0;
    Shortcut _item2;
    this->_barTypeFunc(input);
    unsigned int _shortcutsLen = input->readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _shortcutsLen; _i2++) {
        _id2 = input->readUnsignedShort();
        _item2 = *dynamic_cast<Shortcut *>(ProtocolTypeManager::getInstance(_id2, input));
        ProtocolTypeManager::deleteLastInstance();

        this->shortcuts.push_back(_item2);
    }
}

void ShortcutBarContentMessage::_barTypeFunc(CustomDataInput *input) {
    this->barType = input->readByte();
    if (this->barType < 0) {

    }
}

void ShortcutBarContentMessage::_shortcutsFunc(CustomDataInput *input) {
    unsigned int _id = input->readUnsignedShort();
    Shortcut _item;
    _item.deserialize(input);
    this->shortcuts.push_back(_item);
}
