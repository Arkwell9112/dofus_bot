#include "GameMapNoMovementMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapNoMovementMessage::deserialize(CustomDataInput *input) {
    this->_cellXFunc(input);
    this->_cellYFunc(input);
}

void GameMapNoMovementMessage::_cellXFunc(CustomDataInput *input) {
    this->cellX = input->readShort();
}

void GameMapNoMovementMessage::_cellYFunc(CustomDataInput *input) {
    this->cellY = input->readShort();
}
