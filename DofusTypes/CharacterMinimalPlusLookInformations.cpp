#include "CharacterMinimalPlusLookInformations.h"
#include "CharacterMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalPlusLookInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalInformations::deserialize(input);
    this->entityLook.deserialize(input);
    this->_breedFunc(input);
}

void CharacterMinimalPlusLookInformations::_breedFunc(CustomDataInput *input) {
    this->breed = input->readByte();
}
