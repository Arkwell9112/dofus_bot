#include "BasicStatMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BasicStatMessage::deserialize(CustomDataInput *input) {
    this->_timeSpentFunc(input);
    this->_statIdFunc(input);
}

void BasicStatMessage::_timeSpentFunc(CustomDataInput *input) {
    this->timeSpent = input->readDouble();
    if (this->timeSpent < 0 || this->timeSpent > 9007199254740990) {

    }
}

void BasicStatMessage::_statIdFunc(CustomDataInput *input) {
    this->statId = input->readVarUhShort();
    if (this->statId < 0) {

    }
}
