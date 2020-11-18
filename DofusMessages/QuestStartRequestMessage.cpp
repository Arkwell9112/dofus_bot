#include "QuestStartRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestStartRequestMessage::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
}

void QuestStartRequestMessage::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}
