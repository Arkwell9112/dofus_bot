#include "ShortcutEmote.h"
#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutEmote::deserialize(CustomDataInput *input) {
    Shortcut::deserialize(input);
    this->_emoteIdFunc(input);
}

void ShortcutEmote::_emoteIdFunc(CustomDataInput *input) {
    this->emoteId = input->readUnsignedByte();
    if (this->emoteId < 0 || this->emoteId > 255) {

    }
}
