#include "MountRenameRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountRenameRequestMessage::deserialize(CustomDataInput *input) {
    this->_nameFunc(input);
    this->_mountIdFunc(input);
}

void MountRenameRequestMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void MountRenameRequestMessage::_mountIdFunc(CustomDataInput *input) {
    this->mountId = input->readVarInt();
}
