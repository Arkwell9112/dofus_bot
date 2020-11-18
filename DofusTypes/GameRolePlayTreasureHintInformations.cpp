#include "GameRolePlayTreasureHintInformations.h"
#include "GameRolePlayActorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayTreasureHintInformations::deserialize(CustomDataInput *input) {
    GameRolePlayActorInformations::deserialize(input);
    this->_npcIdFunc(input);
}

void GameRolePlayTreasureHintInformations::_npcIdFunc(CustomDataInput *input) {
    this->npcId = input->readVarUhShort();
    if (this->npcId < 0) {

    }
}
