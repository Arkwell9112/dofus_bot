#include "GameRolePlayPlayerFightFriendlyAnswerMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPlayerFightFriendlyAnswerMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayPlayerFightFriendlyAnswerMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayPlayerFightFriendlyAnswerMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
