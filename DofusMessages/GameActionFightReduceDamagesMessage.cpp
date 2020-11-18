#include "GameActionFightReduceDamagesMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightReduceDamagesMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightReduceDamagesMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightReduceDamagesMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhInt();
    if (this->amount < 0) {

    }
}
