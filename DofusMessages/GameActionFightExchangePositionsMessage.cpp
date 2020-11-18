#include "GameActionFightExchangePositionsMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightExchangePositionsMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_casterCellIdFunc(input);
    this->_targetCellIdFunc(input);
}

void GameActionFightExchangePositionsMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightExchangePositionsMessage::_casterCellIdFunc(CustomDataInput *input) {
    this->casterCellId = input->readShort();
    if (this->casterCellId < -1 || this->casterCellId > 559) {

    }
}

void GameActionFightExchangePositionsMessage::_targetCellIdFunc(CustomDataInput *input) {
    this->targetCellId = input->readShort();
    if (this->targetCellId < -1 || this->targetCellId > 559) {

    }
}
