#include "GameFightSpectatePlayerRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightSpectatePlayerRequestMessage::deserialize(CustomDataInput *input) {
    this->_playerIdFunc(input);
}

void GameFightSpectatePlayerRequestMessage::_playerIdFunc(CustomDataInput *input) {
    this->playerId = input->readVarUhLong();
    if (this->playerId < 0 || this->playerId > 9007199254740990) {

    }
}
