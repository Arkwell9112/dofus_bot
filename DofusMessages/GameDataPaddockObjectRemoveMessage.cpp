#include "GameDataPaddockObjectRemoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameDataPaddockObjectRemoveMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void GameDataPaddockObjectRemoveMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
