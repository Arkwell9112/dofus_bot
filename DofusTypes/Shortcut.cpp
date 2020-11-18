#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void Shortcut::deserialize(CustomDataInput *input) {
    this->_slotFunc(input);
}

void Shortcut::_slotFunc(CustomDataInput *input) {
    this->slot = input->readByte();
    if (this->slot < 0 || this->slot > 99) {

    }
}
