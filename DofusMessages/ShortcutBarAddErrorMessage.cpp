#include "ShortcutBarAddErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarAddErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorFunc(input);
}

void ShortcutBarAddErrorMessage::_errorFunc(CustomDataInput *input) {
    this->error = input->readByte();
    if (this->error < 0) {

    }
}
