#include "GameFightPauseMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightPauseMessage::deserialize(CustomDataInput *input) {
    this->_isPausedFunc(input);
}

void GameFightPauseMessage::_isPausedFunc(CustomDataInput *input) {
    this->isPaused = input->readBoolean();
}
