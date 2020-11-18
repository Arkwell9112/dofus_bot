#include "PresetDeleteResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetDeleteResultMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetDeleteResultMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}

void PresetDeleteResultMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readByte();
    if (this->code < 0) {

    }
}
