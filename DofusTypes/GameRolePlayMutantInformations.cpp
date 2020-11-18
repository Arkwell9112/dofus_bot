#include "GameRolePlayMutantInformations.h"
#include "GameRolePlayHumanoidInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayMutantInformations::deserialize(CustomDataInput *input) {
    GameRolePlayHumanoidInformations::deserialize(input);
    this->_monsterIdFunc(input);
    this->_powerLevelFunc(input);
}

void GameRolePlayMutantInformations::_monsterIdFunc(CustomDataInput *input) {
    this->monsterId = input->readVarUhShort();
    if (this->monsterId < 0) {

    }
}

void GameRolePlayMutantInformations::_powerLevelFunc(CustomDataInput *input) {
    this->powerLevel = input->readByte();
}
