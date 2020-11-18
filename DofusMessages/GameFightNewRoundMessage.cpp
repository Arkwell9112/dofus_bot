#include "GameFightNewRoundMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightNewRoundMessage::deserialize(CustomDataInput *input) {
    this->_roundNumberFunc(input);
}

void GameFightNewRoundMessage::_roundNumberFunc(CustomDataInput *input) {
    this->roundNumber = input->readVarUhInt();
    if (this->roundNumber < 0) {

    }
}
