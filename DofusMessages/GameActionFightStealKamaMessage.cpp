#include "GameActionFightStealKamaMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightStealKamaMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_amountFunc(input);
}

void GameActionFightStealKamaMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightStealKamaMessage::_amountFunc(CustomDataInput *input) {
    this->amount = input->readVarUhLong();
    if (this->amount < 0 || this->amount > 9007199254740990) {

    }
}
