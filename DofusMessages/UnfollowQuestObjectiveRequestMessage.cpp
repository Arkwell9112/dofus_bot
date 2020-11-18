#include "UnfollowQuestObjectiveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void UnfollowQuestObjectiveRequestMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void UnfollowQuestObjectiveRequestMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void UnfollowQuestObjectiveRequestMessage::_objectiveIdFunc(CustomDataInput *input) {
    this->objectiveId = input->readShort();
}
