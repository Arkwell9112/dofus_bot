#include "GameActionFightModifyEffectsDurationMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightModifyEffectsDurationMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_deltaFunc(input);
}

void GameActionFightModifyEffectsDurationMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightModifyEffectsDurationMessage::_deltaFunc(CustomDataInput *input) {
    this->delta = input->readShort();
}
