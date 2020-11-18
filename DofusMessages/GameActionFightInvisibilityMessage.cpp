#include "GameActionFightInvisibilityMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightInvisibilityMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_stateFunc(input);
}

void GameActionFightInvisibilityMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightInvisibilityMessage::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}
