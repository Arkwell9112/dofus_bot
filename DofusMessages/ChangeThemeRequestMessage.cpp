#include "ChangeThemeRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChangeThemeRequestMessage::deserialize(CustomDataInput *input) {
    this->_themeFunc(input);
}

void ChangeThemeRequestMessage::_themeFunc(CustomDataInput *input) {
    this->theme = input->readByte();
}
