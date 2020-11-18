#include "QuestObjectiveValidatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestObjectiveValidatedMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void QuestObjectiveValidatedMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void QuestObjectiveValidatedMessage::_objectiveIdFunc(CustomDataInput *input) {
    this->objectiveId = input->readVarUhShort();
    if (this->objectiveId < 0) {

    }
}
