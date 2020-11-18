#include "UpdateLifePointsMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UpdateLifePointsMessage::deserialize(CustomDataInput *input) {
    this->_lifePointsFunc(input);
    this->_maxLifePointsFunc(input);
}

void UpdateLifePointsMessage::_lifePointsFunc(CustomDataInput *input) {
    this->lifePoints = input->readVarUhInt();
    if (this->lifePoints < 0) {

    }
}

void UpdateLifePointsMessage::_maxLifePointsFunc(CustomDataInput *input) {
    this->maxLifePoints = input->readVarUhInt();
    if (this->maxLifePoints < 0) {

    }
}
