#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterCharacteristicForPreset::deserialize(CustomDataInput *input) {
    SimpleCharacterCharacteristicForPreset::deserialize(input);
    this->_stuffFunc(input);
}

void CharacterCharacteristicForPreset::_stuffFunc(CustomDataInput *input) {
    this->stuff = input->readVarShort();
}
