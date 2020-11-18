#include "GameRolePlayArenaFightAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaFightAnswerMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayArenaFightAnswerMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayArenaFightAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
