#include "ShortcutBarSwapRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarSwapRequestMessage::deserialize(CustomDataInput *input) {
    this->_barTypeFunc(input);
    this->_firstSlotFunc(input);
    this->_secondSlotFunc(input);
}

void ShortcutBarSwapRequestMessage::_barTypeFunc(CustomDataInput *input) {
    this->barType = input->readByte();
    if (this->barType < 0) {

    }
}

void ShortcutBarSwapRequestMessage::_firstSlotFunc(CustomDataInput *input) {
    this->firstSlot = input->readByte();
    if (this->firstSlot < 0 || this->firstSlot > 99) {

    }
}

void ShortcutBarSwapRequestMessage::_secondSlotFunc(CustomDataInput *input) {
    this->secondSlot = input->readByte();
    if (this->secondSlot < 0 || this->secondSlot > 99) {

    }
}
