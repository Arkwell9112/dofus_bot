#include "QuestStepValidatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestStepValidatedMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_stepIdFunc(input);
}

void QuestStepValidatedMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void QuestStepValidatedMessage::_stepIdFunc(CustomDataInput *input) {
    this->stepId = input->readVarUhShort();
    if (this->stepId < 0) {

    }
}
