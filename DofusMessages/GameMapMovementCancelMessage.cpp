#include "GameMapMovementCancelMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapMovementCancelMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void GameMapMovementCancelMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
