#include "QuestObjectiveValidationMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestObjectiveValidationMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void QuestObjectiveValidationMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void QuestObjectiveValidationMessage::_objectiveIdFunc(CustomDataInput *input) {
    this->objectiveId = input->readVarUhShort();
    if (this->objectiveId < 0) {

    }
}
