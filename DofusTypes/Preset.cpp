#include "Preset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void Preset::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void Preset::_idFunc(CustomDataInput *input) {
    this->id = input->readShort();
}
