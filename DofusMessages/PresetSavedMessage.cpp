#include "PresetSavedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"
#include "../DofusTypes/Preset.h"

void PresetSavedMessage::deserialize(CustomDataInput *input) {
    this->_presetIdFunc(input);
    unsigned int _id2 = input->readUnsignedShort();
    this->preset = *dynamic_cast<Preset *>(ProtocolTypeManager::getInstance(_id2, input));
    ProtocolTypeManager::deleteLastInstance();

}

void PresetSavedMessage::_presetIdFunc(CustomDataInput *input) {
    this->presetId = input->readShort();
}
