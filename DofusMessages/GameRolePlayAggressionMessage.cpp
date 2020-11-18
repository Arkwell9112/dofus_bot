#include "GameRolePlayAggressionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayAggressionMessage::deserialize(CustomDataInput *input) {
    this->_attackerIdFunc(input);
    this->_defenderIdFunc(input);
}

void GameRolePlayAggressionMessage::_attackerIdFunc(CustomDataInput *input) {
    this->attackerId = input->readVarUhLong();
    if (this->attackerId < 0 || this->attackerId > 9007199254740990) {

    }
}

void GameRolePlayAggressionMessage::_defenderIdFunc(CustomDataInput *input) {
    this->defenderId = input->readVarUhLong();
    if (this->defenderId < 0 || this->defenderId > 9007199254740990) {

    }
}
