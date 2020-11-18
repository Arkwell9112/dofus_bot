#include "CharacterHardcoreOrEpicInformations.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterHardcoreOrEpicInformations::deserialize(CustomDataInput *input) {
    CharacterBaseInformations::deserialize(input);
    this->_deathStateFunc(input);
    this->_deathCountFunc(input);
    this->_deathMaxLevelFunc(input);
}

void CharacterHardcoreOrEpicInformations::_deathStateFunc(CustomDataInput *input) {
    this->deathState = input->readByte();
    if (this->deathState < 0) {

    }
}

void CharacterHardcoreOrEpicInformations::_deathCountFunc(CustomDataInput *input) {
    this->deathCount = input->readVarUhShort();
    if (this->deathCount < 0) {

    }
}

void CharacterHardcoreOrEpicInformations::_deathMaxLevelFunc(CustomDataInput *input) {
    this->deathMaxLevel = input->readVarUhShort();
    if (this->deathMaxLevel < 0) {

    }
}
