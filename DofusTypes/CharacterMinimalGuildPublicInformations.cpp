#include "CharacterMinimalInformations.h"
#include "CharacterMinimalGuildPublicInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void CharacterMinimalGuildPublicInformations::deserialize(CustomDataInput *input) {
    CharacterMinimalInformations::deserialize(input);
    this->_rankFunc(input);
}

void CharacterMinimalGuildPublicInformations::_rankFunc(CustomDataInput *input) {
    this->rank = input->readVarUhInt();
    if (this->rank < 0) {

    }
}
