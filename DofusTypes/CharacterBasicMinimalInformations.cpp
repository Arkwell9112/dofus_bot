#include "CharacterBasicMinimalInformations.h"
#include "AbstractCharacterInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterBasicMinimalInformations::deserialize(CustomDataInput *input) {
    AbstractCharacterInformation::deserialize(input);
    this->_nameFunc(input);
}

void CharacterBasicMinimalInformations::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
