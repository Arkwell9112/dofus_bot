#include "GameFightOptionStateUpdateMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameFightOptionStateUpdateMessage::deserialize(CustomDataInput *input) {
    this->_fightIdFunc(input);
    this->_teamIdFunc(input);
    this->_optionFunc(input);
    this->_stateFunc(input);
}

void GameFightOptionStateUpdateMessage::_fightIdFunc(CustomDataInput *input) {
    this->fightId = input->readVarUhShort();
    if (this->fightId < 0) {

    }
}

void GameFightOptionStateUpdateMessage::_teamIdFunc(CustomDataInput *input) {
    this->teamId = input->readByte();
    if (this->teamId < 0) {

    }
}

void GameFightOptionStateUpdateMessage::_optionFunc(CustomDataInput *input) {
    this->option = input->readByte();
    if (this->option < 0) {

    }
}

void GameFightOptionStateUpdateMessage::_stateFunc(CustomDataInput *input) {
    this->state = input->readBoolean();
}
