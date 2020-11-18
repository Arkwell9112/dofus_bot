#include "MountSterilizedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountSterilizedMessage::deserialize(CustomDataInput *input) {
    this->_mountIdFunc(input);
}

void MountSterilizedMessage::_mountIdFunc(CustomDataInput *input) {
    this->mountId = input->readVarInt();
}
