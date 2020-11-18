#include "FinishMoveSetRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FinishMoveSetRequestMessage::deserialize(CustomDataInput *input) {
    this->_finishMoveIdFunc(input);
    this->_finishMoveStateFunc(input);
}

void FinishMoveSetRequestMessage::_finishMoveIdFunc(CustomDataInput *input) {
    this->finishMoveId = input->readInt();
    if (this->finishMoveId < 0) {

    }
}

void FinishMoveSetRequestMessage::_finishMoveStateFunc(CustomDataInput *input) {
    this->finishMoveState = input->readBoolean();
}
