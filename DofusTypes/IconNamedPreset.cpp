#include "PresetsContainerPreset.h"
#include "Preset.h"
#include "IconNamedPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void IconNamedPreset::deserialize(CustomDataInput *input) {
    PresetsContainerPreset::deserialize(input);
    this->_iconIdFunc(input);
    this->_nameFunc(input);
}

void IconNamedPreset::_iconIdFunc(CustomDataInput *input) {
    this->iconId = input->readShort();
    if (this->iconId < 0) {

    }
}

void IconNamedPreset::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
