#include "PresetDeleteRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetDeleteRequestMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
}

void PresetDeleteRequestMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
