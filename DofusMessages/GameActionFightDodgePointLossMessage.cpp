#include "GameActionFightDodgePointLossMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightDodgePointLossMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightDodgePointLossMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightDodgePointLossMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhShort();
    if (this->amount < 0) {

    }
}
