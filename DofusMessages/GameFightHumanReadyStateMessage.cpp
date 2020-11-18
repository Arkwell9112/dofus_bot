#include "GameFightHumanReadyStateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightHumanReadyStateMessage::deserialize(CustomDataInput *input) {
    this->_characterIdFunc(input);
    this->_isReadyFunc(input);
}

void GameFightHumanReadyStateMessage::_characterIdFunc(CustomDataInput *input) {
    this->characterId = input->readVarUhLong();
    if (this->characterId < 0 || this->characterId > 9007199254740990) {

    }
}

void GameFightHumanReadyStateMessage::_isReadyFunc(CustomDataInput *input) {
    this->isReady = input->readBoolean();
}
