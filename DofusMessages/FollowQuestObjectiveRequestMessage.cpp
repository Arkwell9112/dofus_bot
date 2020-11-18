#include "FollowQuestObjectiveRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void FollowQuestObjectiveRequestMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
    this->_objectiveIdFunc(input);
}

void FollowQuestObjectiveRequestMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}

void FollowQuestObjectiveRequestMessage::_objectiveIdFunc(CustomDataInput *input) {
    this->objectiveId = input->readShort();
}
