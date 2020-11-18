#include "QuestStepInfoRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestStepInfoRequestMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
}

void QuestStepInfoRequestMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}
