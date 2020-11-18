#include "QuestStepStartedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestStepStartedMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_stepIdFunc(input);
}

void QuestStepStartedMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void QuestStepStartedMessage::_stepIdFunc(CustomDataInput *input) {
    this->stepId = input->readVarUhShort();
    if (this->stepId < 0) {

    }
}
