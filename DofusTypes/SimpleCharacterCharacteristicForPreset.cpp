#include "SimpleCharacterCharacteristicForPreset.h"
#include "Preset.h"
#include "CharacterCharacteristicForPreset.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SimpleCharacterCharacteristicForPreset::deserialize(CustomDataInput *input) {
    this->_keywordFunc(input);
    this->_baseFunc(input);
    this->_additionnalFunc(input);
}

void SimpleCharacterCharacteristicForPreset::_keywordFunc(CustomDataInput *input) {
    this->keyword = input->readUTF();
}

void SimpleCharacterCharacteristicForPreset::_baseFunc(CustomDataInput *input) {
    this->base = input->readVarShort();
}

void SimpleCharacterCharacteristicForPreset::_additionnalFunc(CustomDataInput *input) {
    this->additionnal = input->readVarShort();
}
