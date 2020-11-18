#include "GameFightReadyMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightReadyMessage::deserialize(CustomDataInput *input) {
    this->_isReadyFunc(input);
}

void GameFightReadyMessage::_isReadyFunc(CustomDataInput *input) {
    this->isReady = input->readBoolean();
}
