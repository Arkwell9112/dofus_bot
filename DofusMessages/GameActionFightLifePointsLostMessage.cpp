#include "GameActionFightLifePointsLostMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightLifePointsLostMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_lossFunc(input);
    this->_permanentDamagesFunc(input);
    this->_elementIdFunc(input);
}

void GameActionFightLifePointsLostMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightLifePointsLostMessage::_lossFunc(CustomDataInput *input) {
    this->loss = input->readVarUhInt();
    if (this->loss < 0) {

    }
}

void GameActionFightLifePointsLostMessage::_permanentDamagesFunc(CustomDataInput *input) {
    this->permanentDamages = input->readVarUhInt();
    if (this->permanentDamages < 0) {

    }
}

void GameActionFightLifePointsLostMessage::_elementIdFunc(CustomDataInput *input) {
    this->elementId = input->readVarInt();
}
