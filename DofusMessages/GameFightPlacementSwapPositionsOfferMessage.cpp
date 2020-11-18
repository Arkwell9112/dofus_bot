#include "GameFightPlacementSwapPositionsOfferMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPlacementSwapPositionsOfferMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
    this->_requesterIdFunc(input);
    this->_requesterCellIdFunc(input);
    this->_requestedIdFunc(input);
    this->_requestedCellIdFunc(input);
}

void GameFightPlacementSwapPositionsOfferMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readInt();
    if (this->requestId < 0) {

    }
}

void GameFightPlacementSwapPositionsOfferMessage::_requesterIdFunc(CustomDataInput *input) {
    this->requesterId = input->readDouble();
    if (this->requesterId < -9007199254740990 || this->requesterId > 9007199254740990) {

    }
}

void GameFightPlacementSwapPositionsOfferMessage::_requesterCellIdFunc(CustomDataInput *input) {
    this->requesterCellId = input->readVarUhShort();
    if (this->requesterCellId < 0 || this->requesterCellId > 559) {

    }
}

void GameFightPlacementSwapPositionsOfferMessage::_requestedIdFunc(CustomDataInput *input) {
    this->requestedId = input->readDouble();
    if (this->requestedId < -9007199254740990 || this->requestedId > 9007199254740990) {

    }
}

void GameFightPlacementSwapPositionsOfferMessage::_requestedCellIdFunc(CustomDataInput *input) {
    this->requestedCellId = input->readVarUhShort();
    if (this->requestedCellId < 0 || this->requestedCellId > 559) {

    }
}
