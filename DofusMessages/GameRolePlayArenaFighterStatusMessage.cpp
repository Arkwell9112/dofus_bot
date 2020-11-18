#include "GameRolePlayArenaFighterStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaFighterStatusMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_playerIdFunc(input);
    this->_acceptedFunc(input);
}

void GameRolePlayArenaFighterStatusMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayArenaFighterStatusMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readDouble();
    if (this->playerId < -9007199254740990 || this->playerId > 9007199254740990) {

    }
}

void GameRolePlayArenaFighterStatusMessage::_acceptedFunc(CustomDataInput *input) {
    this->accepted = input->readBoolean();
}
