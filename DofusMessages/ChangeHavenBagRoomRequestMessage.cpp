#include "ChangeHavenBagRoomRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ChangeHavenBagRoomRequestMessage::deserialize(CustomDataInput *input) {
    this->_roomIdFunc(input);
}

void ChangeHavenBagRoomRequestMessage::_roomIdFunc(CustomDataInput *input) {
    this->roomId = input->readByte();
    if (this->roomId < 0) {

    }
}
