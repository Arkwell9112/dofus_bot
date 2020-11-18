#include "ShortcutBarSwapErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Shortcut.h"

void ShortcutBarSwapErrorMessage::deserialize(CustomDataInput *input) {
    this->_errorFunc(input);
}

void ShortcutBarSwapErrorMessage::_errorFunc(CustomDataInput *input) {
    this->error = input->readByte();
    if (this->error < 0) {

    }
}
