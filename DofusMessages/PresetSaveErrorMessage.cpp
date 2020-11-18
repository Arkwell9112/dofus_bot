#include "PresetSaveErrorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetSaveErrorMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetSaveErrorMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}

void PresetSaveErrorMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readByte();
    if (this->code < 0) {

    }
}
