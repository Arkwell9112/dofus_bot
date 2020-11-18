#include "ShortcutBarRemoveErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarRemoveErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorFunc(input);
}

void ShortcutBarRemoveErrorMessage::_errorFunc(CustomDataInput *input) {
    this->error = input->readByte();
    if (this->error < 0) {

    }
}
