#include "IconPresetSaveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void IconPresetSaveRequestMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    this->_symbolIdFunc(input);
    this->_updateDataFunc(input);
}

void IconPresetSaveRequestMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}

void IconPresetSaveRequestMessage::_symbolIdFunc(CustomDataInput *input) {
    this->symbolId = input->readByte();
    if (this->symbolId < 0) {

    }
}

void IconPresetSaveRequestMessage::_updateDataFunc(CustomDataInput *input) {
    this->updateData = input->readBoolean();
}
