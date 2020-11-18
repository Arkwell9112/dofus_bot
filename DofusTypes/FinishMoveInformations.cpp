#include "FinishMoveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FinishMoveInformations::deserialize(CustomDataInput *input) {
    this->_finishMoveIdFunc(input);
    this->_finishMoveStateFunc(input);
}

void FinishMoveInformations::_finishMoveIdFunc(CustomDataInput *input) {
    this->finishMoveId = input->readInt();
    if (this->finishMoveId < 0) {

    }
}

void FinishMoveInformations::_finishMoveStateFunc(CustomDataInput *input) {
    this->finishMoveState = input->readBoolean();
}
