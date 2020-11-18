#include "GameFightPlacementSwapPositionsCancelMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsCancelMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
}

void GameFightPlacementSwapPositionsCancelMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readInt();
    if (this->requestId < 0) {

    }
}
