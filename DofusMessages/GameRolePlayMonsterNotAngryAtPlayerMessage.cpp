#include "GameRolePlayMonsterNotAngryAtPlayerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayMonsterNotAngryAtPlayerMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_monsterGroupIdFunc(input);
}

void GameRolePlayMonsterNotAngryAtPlayerMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void GameRolePlayMonsterNotAngryAtPlayerMessage::_monsterGroupIdFunc(CustomDataInput *input) {
    this->monsterGroupId = input->readDouble();
    if (this->monsterGroupId < -9007199254740990 || this->monsterGroupId > 9007199254740990) {

    }
}
