#include "UpdateLifePointsMessage.h"
#include "LifePointsRegenEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void LifePointsRegenEndMessage::deserialize(CustomDataInput *input) {
    UpdateLifePointsMessage::deserialize(input);
    this->_lifePointsGainedFunc(input);
}

void LifePointsRegenEndMessage::_lifePointsGainedFunc(CustomDataInput *input) {
    this->lifePointsGained = input->readVarUhInt();
    if (this->lifePointsGained < 0) {

    }
}
