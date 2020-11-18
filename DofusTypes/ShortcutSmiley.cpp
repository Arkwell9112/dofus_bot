#include "ShortcutSmiley.h"
#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutSmiley::deserialize(CustomDataInput *input) {
    Shortcut::deserialize(input);
    this->_smileyIdFunc(input);
}

void ShortcutSmiley::_smileyIdFunc(CustomDataInput *input) {
    this->smileyId = input->readVarUhShort();
    if (this->smileyId < 0) {

    }
}
