#include "BreachRoomUnlockRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachRoomUnlockRequestMessage::deserialize(CustomDataInput *input) {
    this->_roomIdFunc(input);
}

void BreachRoomUnlockRequestMessage::_roomIdFunc(CustomDataInput *input) {
    this->roomId = input->readByte();
    if (this->roomId < 0) {

    }
}
