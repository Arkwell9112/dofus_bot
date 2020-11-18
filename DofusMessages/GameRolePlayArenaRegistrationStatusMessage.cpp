#include "GameRolePlayArenaRegistrationStatusMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaRegistrationStatusMessage::deserialize(CustomDataInput *input) {
    this->_registeredFunc(input);
    this->_stepFunc(input);
    this->_battleModeFunc(input);
}

void GameRolePlayArenaRegistrationStatusMessage::_registeredFunc(CustomDataInput *input) {
    this->registered = input->readBoolean();
}

void GameRolePlayArenaRegistrationStatusMessage::_stepFunc(CustomDataInput *input) {
    this->step = input->readByte();
    if (this->step < 0) {

    }
}

void GameRolePlayArenaRegistrationStatusMessage::_battleModeFunc(CustomDataInput *input) {
    this->battleMode = input->readInt();
    if (this->battleMode < 0) {

    }
}
