#include "RemodelingInformation.h"
#include "CharacterToRemodelInformations.h"
#include "CharacterRemodelingInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterToRemodelInformations::deserialize(CustomDataInput *input) {
    CharacterRemodelingInformation::deserialize(input);
    this->_possibleChangeMaskFunc(input);
    this->_mandatoryChangeMaskFunc(input);
}

void CharacterToRemodelInformations::_possibleChangeMaskFunc(CustomDataInput *input) {
    this->possibleChangeMask = input->readByte();
    if (this->possibleChangeMask < 0) {

    }
}

void CharacterToRemodelInformations::_mandatoryChangeMaskFunc(CustomDataInput *input) {
    this->mandatoryChangeMask = input->readByte();
    if (this->mandatoryChangeMask < 0) {

    }
}
