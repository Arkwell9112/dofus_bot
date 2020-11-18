#include "GameRolePlayPlayerFightFriendlyAnsweredMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPlayerFightFriendlyAnsweredMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readVarUhLong();
    if (this->sourceId < 0 || this->sourceId > 9007199254740990) {

    }
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readVarUhLong();
    if (this->targetId < 0 || this->targetId > 9007199254740990) {

    }
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_acceptFunc(CustomDataInput *input) {
    this->accept = input->readBoolean();
}
