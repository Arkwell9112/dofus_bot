#include "ShortcutObject.h"
#include "Shortcut.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ShortcutObject::deserialize(CustomDataInput *input) {
    Shortcut::deserialize(input);
}