#include "QuestActiveInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void QuestActiveInformations::deserialize(CustomDataInput *input) {
    this->_questIdFunc(input);
}

void QuestActiveInformations::_questIdFunc(CustomDataInput *input) {
    this->questId = input->readVarUhShort();
    if (this->questId < 0) {

    }
}
