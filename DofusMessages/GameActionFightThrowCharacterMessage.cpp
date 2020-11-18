#include "GameActionFightThrowCharacterMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightThrowCharacterMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightThrowCharacterMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightThrowCharacterMessage::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readShort();
    if (this->cellId < -1 || this->cellId > 559) {

    }
}
