#include "AbstractGameActionMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AbstractGameActionMessage::deserialize(CustomDataInput *input) {
    this->_actionIdFunc(input);
    this->_sourceIdFunc(input);
}

void AbstractGameActionMessage::_actionIdFunc(CustomDataInput *input) {
    this->actionId = input->readVarUhShort();
    if (this->actionId < 0) {

    }
}

void AbstractGameActionMessage::_sourceIdFunc(CustomDataInput *input) {
    this->sourceId = input->readDouble();
    if (this->sourceId < -9007199254740990 || this->sourceId > 9007199254740990) {

    }
}
