#include "QuestValidatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestValidatedMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
}

void QuestValidatedMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}
