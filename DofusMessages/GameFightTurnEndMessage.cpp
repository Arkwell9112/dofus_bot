#include "GameFightTurnEndMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnEndMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
}

void GameFightTurnEndMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readDouble();
    if (this->id < -9007199254740990 || this->id > 9007199254740990) {

    }
}
