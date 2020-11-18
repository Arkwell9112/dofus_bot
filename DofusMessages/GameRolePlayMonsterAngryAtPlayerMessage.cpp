#include "GameRolePlayMonsterAngryAtPlayerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayMonsterAngryAtPlayerMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
    this->_monsterGroupIdFunc(input);
    this->_angryStartTimeFunc(input);
    this->_attackTimeFunc(input);
}

void GameRolePlayMonsterAngryAtPlayerMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}

void GameRolePlayMonsterAngryAtPlayerMessage::_monsterGroupIdFunc(CustomDataInput *input) {
    this->monsterGroupId = input->readDouble();
    if (this->monsterGroupId < -9007199254740990 || this->monsterGroupId > 9007199254740990) {

    }
}

void GameRolePlayMonsterAngryAtPlayerMessage::_angryStartTimeFunc(CustomDataInput *input) {
    this->angryStartTime = input->readDouble();
    if (this->angryStartTime < 0 || this->angryStartTime > 9007199254740990) {

    }
}

void GameRolePlayMonsterAngryAtPlayerMessage::_attackTimeFunc(CustomDataInput *input) {
    this->attackTime = input->readDouble();
    if (this->attackTime < 0 || this->attackTime > 9007199254740990) {

    }
}
