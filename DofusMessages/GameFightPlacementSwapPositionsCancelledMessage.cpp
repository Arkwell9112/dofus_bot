#include "GameFightPlacementSwapPositionsCancelledMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsCancelledMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
    this->_cancellerIdFunc(input);
}

void GameFightPlacementSwapPositionsCancelledMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readInt();
    if (this->requestId < 0) {

    }
}

void GameFightPlacementSwapPositionsCancelledMessage::_cancellerIdFunc(CustomDataInput *input) {
    this->cancellerId = input->readDouble();
    if (this->cancellerId < -9007199254740990 || this->cancellerId > 9007199254740990) {

    }
}
