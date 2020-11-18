#include "GameRolePlayPlayerFightFriendlyRequestedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPlayerFightFriendlyRequestedMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readVarUhLong();
    if (this->sourceId < 0 || this->sourceId > 9007199254740990) {

    }
}

void GameRolePlayPlayerFightFriendlyRequestedMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readVarUhLong();
    if (this->targetId < 0 || this->targetId > 9007199254740990) {

    }
}
