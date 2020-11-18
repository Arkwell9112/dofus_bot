#include "PlayerStatus.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PlayerStatus::deserialize(CustomDataInput *input) {
    this->_statusIdFunc(input);
}

void PlayerStatus::_statusIdFunc(CustomDataInput *input) {
    this->statusId = input->readByte();
    if (this->statusId < 0) {

    }
}
