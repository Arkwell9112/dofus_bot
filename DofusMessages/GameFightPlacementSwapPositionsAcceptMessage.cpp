#include "GameFightPlacementSwapPositionsAcceptMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsAcceptMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
}

void GameFightPlacementSwapPositionsAcceptMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readInt();
    if (this->requestId < 0) {

    }
}
