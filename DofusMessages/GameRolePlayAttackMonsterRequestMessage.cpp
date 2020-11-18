#include "GameRolePlayAttackMonsterRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayAttackMonsterRequestMessage::deserialize(CustomDataInput *input) {
    this->_monsterGroupIdFunc(input);
}

void GameRolePlayAttackMonsterRequestMessage::_monsterGroupIdFunc(CustomDataInput *input) {
    this->monsterGroupId = input->readDouble();
    if (this->monsterGroupId < -9007199254740990 || this->monsterGroupId > 9007199254740990) {

    }
}
