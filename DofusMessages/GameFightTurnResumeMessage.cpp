#include "GameFightTurnStartMessage.h"
#include "GameFightTurnResumeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnResumeMessage::deserialize(CustomDataInput *input) {
    GameFightTurnStartMessage::deserialize(input);
    this->_remainingTimeFunc(input);
}

void GameFightTurnResumeMessage::_remainingTimeFunc(CustomDataInput *input) {
    this->remainingTime = input->readVarUhInt();
    if (this->remainingTime < 0) {

    }
}
