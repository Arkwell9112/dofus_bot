#include "GameFightTurnReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnReadyMessage::deserialize(CustomDataInput *input) {
    this->_isReadyFunc(input);
}

void GameFightTurnReadyMessage::_isReadyFunc(CustomDataInput *input) {
    this->isReady = input->readBoolean();
}
