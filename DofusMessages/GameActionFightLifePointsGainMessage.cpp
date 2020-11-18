#include "GameActionFightLifePointsGainMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightLifePointsGainMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_deltaFunc(input);
}

void GameActionFightLifePointsGainMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightLifePointsGainMessage::_deltaFunc(CustomDataInput *input) {
    this->delta = input->readVarUhInt();
    if (this->delta < 0) {

    }
}
