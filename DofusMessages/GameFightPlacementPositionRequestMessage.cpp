#include "GameFightPlacementPositionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementPositionRequestMessage::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
}

void GameFightPlacementPositionRequestMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0 || this->cellId > 559) {

    }
}
