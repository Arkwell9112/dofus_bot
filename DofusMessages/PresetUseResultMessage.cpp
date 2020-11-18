#include "PresetUseResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetUseResultMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetUseResultMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}

void PresetUseResultMessage::_codeFunc(CustomDataInput *input) {
    this->code = input->readByte();
    if (this->code < 0) {

    }
}
