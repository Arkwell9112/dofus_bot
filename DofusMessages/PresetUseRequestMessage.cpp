#include "PresetUseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetUseRequestMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
}

void PresetUseRequestMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
