#include "IconPresetSaveRequestMessage.h"
#include "IconNamedPresetSaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

#include "../DofusTypes/IconNamedPreset.h"

void IconNamedPresetSaveRequestMessage::deserialize(CustomDataInput *input) {
    IconPresetSaveRequestMessage::deserialize(input);
    this->_nameFunc(input);
    this->_typeFunc(input);
}

void IconNamedPresetSaveRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void IconNamedPresetSaveRequestMessage::_typeFunc(CustomDataInput *input) {
    this->type = input->readByte();
    if (this->type < 0) {

    }
}
