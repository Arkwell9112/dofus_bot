#include "BreachRoomUnlockResultMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void BreachRoomUnlockResultMessage::deserialize(CustomDataInput *input) {
    this->_roomIdFunc(input);
    this->_resultFunc(input);
}

void BreachRoomUnlockResultMessage::_roomIdFunc(CustomDataInput *input) {
    this->roomId = input->readByte();
    if (this->roomId < 0) {

    }
}

void BreachRoomUnlockResultMessage::_resultFunc(CustomDataInput *input) {
    this->result = input->readByte();
    if (this->result < 0) {

    }
}
