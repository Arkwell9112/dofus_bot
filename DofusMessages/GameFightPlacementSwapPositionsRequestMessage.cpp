#include "GameFightPlacementSwapPositionsRequestMessage.h"
#include "GameFightPlacementPositionRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsRequestMessage::deserialize(CustomDataInput *input) {
    GameFightPlacementPositionRequestMessage::deserialize(input);
    this->_requestedIdFunc(input);
}

void GameFightPlacementSwapPositionsRequestMessage::_requestedIdFunc(CustomDataInput *input) {
    this->requestedId = input->readDouble();
    if (this->requestedId < -9007199254740990 || this->requestedId > 9007199254740990) {

    }
}
