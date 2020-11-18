#include "GameActionFightSlideMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightSlideMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_startCellIdFunc(input);
    this->_endCellIdFunc(input);
}

void GameActionFightSlideMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightSlideMessage::_startCellIdFunc(CustomDataInput *input) {
    this->startCellId = input->readShort();
    if (this->startCellId < -1 || this->startCellId > 559) {

    }
}

void GameActionFightSlideMessage::_endCellIdFunc(CustomDataInput *input) {
    this->endCellId = input->readShort();
    if (this->endCellId < -1 || this->endCellId > 559) {

    }
}
