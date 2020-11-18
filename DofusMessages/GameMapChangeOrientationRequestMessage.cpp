#include "GameMapChangeOrientationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void GameMapChangeOrientationRequestMessage::deserialize(CustomDataInput *input) {
    this->_directionFunc(input);
}

void GameMapChangeOrientationRequestMessage::_directionFunc(CustomDataInput *input) {
    this->direction = input->readByte();
    if (this->direction < 0) {

    }
}
