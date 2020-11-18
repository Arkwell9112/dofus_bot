#include "FightEntityDispositionInformations.h"
#include "EntityDispositionInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FightEntityDispositionInformations::deserialize(CustomDataInput *input) {
    EntityDispositionInformations::deserialize(input);
    this->_carryingCharacterIdFunc(input);
}

void FightEntityDispositionInformations::_carryingCharacterIdFunc(CustomDataInput *input) {
    this->carryingCharacterId = input->readDouble();
    if (this->carryingCharacterId < -9007199254740990 || this->carryingCharacterId > 9007199254740990) {

    }
}
