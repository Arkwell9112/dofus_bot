#include "TreasureHuntDigRequestAnswerMessage.h"
#include "TreasureHuntDigRequestAnswerFailedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TreasureHuntDigRequestAnswerFailedMessage::deserialize(CustomDataInput *input) {
    TreasureHuntDigRequestAnswerMessage::deserialize(input);
    this->_wrongFlagCountFunc(input);
}

void TreasureHuntDigRequestAnswerFailedMessage::_wrongFlagCountFunc(CustomDataInput *input) {
    this->wrongFlagCount = input->readByte();
    if (this->wrongFlagCount < 0) {

    }
}
