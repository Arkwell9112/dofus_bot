#include "GameFightTurnStartMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnStartMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_waitTimeFunc(input);
}

void GameFightTurnStartMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}

void GameFightTurnStartMessage::_waitTimeFunc(CustomDataInput *input) {
    this->waitTime = input->readVarUhInt();
    if (this->waitTime < 0) {

    }
}
