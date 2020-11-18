#include "GameActionFightLifePointsLostMessage.h"
#include "GameActionFightLifeAndShieldPointsLostMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightLifeAndShieldPointsLostMessage::deserialize(CustomDataInput *input) {
    GameActionFightLifePointsLostMessage::deserialize(input);
    this->_shieldLossFunc(input);
}

void GameActionFightLifeAndShieldPointsLostMessage::_shieldLossFunc(CustomDataInput *input) {
    this->shieldLoss = input->readVarUhShort();
    if (this->shieldLoss < 0) {

    }
}
