#include "GameFightNewWaveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightNewWaveMessage::deserialize(CustomDataInput *input) {
    this->_idFunc(input);
    this->_teamIdFunc(input);
    this->_nbTurnBeforeNextWaveFunc(input);
}

void GameFightNewWaveMessage::_idFunc(CustomDataInput *input) {
    this->id = input->readByte();
    if (this->id < 0) {

    }
}

void GameFightNewWaveMessage::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void GameFightNewWaveMessage::_nbTurnBeforeNextWaveFunc(CustomDataInput *input) {
    this->nbTurnBeforeNextWave = input->readShort();
}
