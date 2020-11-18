#include "GameActionFightDispellMessage.h"
#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameActionFightDispellMessage::deserialize(CustomDataInput *input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_verboseCastFunc(input);
}

void GameActionFightDispellMessage::_targetIdFunc(CustomDataInput *input) {
    this->targetId = input->readDouble();
    if (this->targetId < -9007199254740990 || this->targetId > 9007199254740990) {

    }
}

void GameActionFightDispellMessage::_verboseCastFunc(CustomDataInput *input) {
    this->verboseCast = input->readBoolean();
}
