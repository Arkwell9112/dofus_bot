#include "CharacterMinimalPlusLookInformations.h"
#include "CharacterBaseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterBaseInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->_sexFunc(input);
}

void CharacterBaseInformations::_sexFunc(CustomDataInput *input) {
    this->sex = input->readBoolean();
}
