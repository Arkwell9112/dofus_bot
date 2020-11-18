#include "GameFightFighterMonsterLightInformations.h"
#include "GameFightFighterLightInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightFighterMonsterLightInformations::deserialize(CustomDataInput *input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_creatureGenericIdFunc(input);
}

void GameFightFighterMonsterLightInformations::_creatureGenericIdFunc(CustomDataInput *input) {
    this->creatureGenericId = input->readVarUhShort();
    if (this->creatureGenericId < 0) {

    }
}
