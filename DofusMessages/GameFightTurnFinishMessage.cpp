#include "GameFightTurnFinishMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightTurnFinishMessage::deserialize(CustomDataInput *input) {
    this->_isAfkFunc(input);
}

void GameFightTurnFinishMessage::_isAfkFunc(CustomDataInput *input) {
    this->isAfk = input->readBoolean();
}
