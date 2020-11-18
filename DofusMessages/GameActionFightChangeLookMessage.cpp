#include "GameActionFightChangeLookMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightChangeLookMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->entityLook.deserialize(input);
}

void GameActionFightChangeLookMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}
