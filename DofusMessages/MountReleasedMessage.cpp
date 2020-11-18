#include "MountReleasedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountReleasedMessage::deserialize(CustomDataInput *input) {
    this->_mountIdFunc(input);
}

void MountReleasedMessage::_mountIdFunc(CustomDataInput *input) {
    this->mountId = input->readVarInt();
}
