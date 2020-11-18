#include "GameContextRemoveElementWithEventMessage.h"
#include "GameContextRemoveElementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameContextRemoveElementWithEventMessage::deserialize(CustomDataInput *input) {
    GameContextRemoveElementMessage::deserialize(input);
    this->_elementEventIdFunc(input);
}

void GameContextRemoveElementWithEventMessage::_elementEventIdFunc(CustomDataInput *input) {
    this->elementEventId = input->readByte();
    if (this->elementEventId < 0) {

    }
}
