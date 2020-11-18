#include "PlayerStatusExtended.h"
#include "PlayerStatus.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PlayerStatusExtended::deserialize(CustomDataInput *input) {
    PlayerStatus::deserialize(input);
    this->_messageFunc(input);
}

void PlayerStatusExtended::_messageFunc(CustomDataInput *input) {
    this->message = input->readUTF();
}
