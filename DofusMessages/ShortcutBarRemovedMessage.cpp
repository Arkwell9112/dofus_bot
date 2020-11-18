#include "ShortcutBarRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarRemovedMessage::deserialize(CustomDataInput *input) {
    this->_barTypeFunc(input);
    this->_slotFunc(input);
}

void ShortcutBarRemovedMessage::_barTypeFunc(CustomDataInput *input) {
    this->barType = input->readByte();
    if (this->barType < 0) {

    }
}

void ShortcutBarRemovedMessage::_slotFunc(CustomDataInput *input) {
    this->slot = input->readByte();
    if (this->slot < 0 || this->slot > 99) {

    }
}
