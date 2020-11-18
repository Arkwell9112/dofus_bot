#include "GameRolePlayArenaRegisterMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameRolePlayArenaRegisterMessage::deserialize(CustomDataInput *input) {
    this->_battleModeFunc(input);
}

void GameRolePlayArenaRegisterMessage::_battleModeFunc(CustomDataInput *input) {
    this->battleMode = input->readInt();
    if (this->battleMode < 0) {

    }
}
