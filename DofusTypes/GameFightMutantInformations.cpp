#include "GameFightMutantInformations.h"
#include "GameFightFighterNamedInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightMutantInformations::deserialize(CustomDataInput *input) {
    GameFightFighterNamedInformations::deserialize(input);
    this->_powerLevelFunc(input);
}

void GameFightMutantInformations::_powerLevelFunc(CustomDataInput *input) {
    this->powerLevel = input->readByte();
    if (this->powerLevel < 0) {

    }
}
