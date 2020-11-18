#include "GameRolePlayPlayerFightRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayPlayerFightRequestMessage::deserialize(CustomDataInput *input) {
    this->_targetIdFunc(input);
    this->_targetCellIdFunc(input);
    this->_friendlyFunc(input);
}

void GameRolePlayPlayerFightRequestMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readVarUhLong();
    if (this->targetId < 0 || this->targetId > 9007199254740990) {

    }
}

void GameRolePlayPlayerFightRequestMessage::_targetCellIdFunc(CustomDataInput *input) {
    this->targetCellId = input->readShort();
    if (this->targetCellId < -1 || this->targetCellId > 559) {

    }
}

void GameRolePlayPlayerFightRequestMessage::_friendlyFunc(CustomDataInput *input) {
    this->friendly = input->readBoolean();
}
