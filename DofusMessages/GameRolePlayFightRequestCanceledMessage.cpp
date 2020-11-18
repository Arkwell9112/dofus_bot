#include "GameRolePlayFightRequestCanceledMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayFightRequestCanceledMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
}

void GameRolePlayFightRequestCanceledMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayFightRequestCanceledMessage::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readDouble();
    if (this->sourceId < -9007199254740990 || this->sourceId > 9007199254740990) {

    }
}

void GameRolePlayFightRequestCanceledMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}
