#include "CharacterMinimalInformations.h"
#include "CharacterBasicMinimalInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalInformations::deserialize(CustomDataInput *input) {
    CharacterBasicMinimalInformations::deserialize(input);
    this->_levelFunc(input);
}

void CharacterMinimalInformations::_levelFunc(CustomDataInput *input) {
    this->level = input->readVarUhShort();
    if (this->level < 0) {

    }
}
