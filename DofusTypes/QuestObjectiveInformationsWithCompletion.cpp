#include "QuestObjectiveInformationsWithCompletion.h"
#include "QuestObjectiveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestObjectiveInformationsWithCompletion::deserialize(CustomDataInput *input) {
    QuestObjectiveInformations::deserialize(input);
    this->_curCompletionFunc(input);
    this->_maxCompletionFunc(input);
}

void QuestObjectiveInformationsWithCompletion::_curCompletionFunc(CustomDataInput *input) {
    this->curCompletion = input->readVarUhShort();
    if (this->curCompletion < 0) {

    }
}

void QuestObjectiveInformationsWithCompletion::_maxCompletionFunc(CustomDataInput *input) {
    this->maxCompletion = input->readVarUhShort();
    if (this->maxCompletion < 0) {

    }
}
