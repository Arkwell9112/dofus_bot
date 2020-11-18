#include "MountRenamedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountRenamedMessage::deserialize(CustomDataInput *input) {
    this->_mountIdFunc(input);
    this->_nameFunc(input);
}

void MountRenamedMessage::_mountIdFunc(CustomDataInput *input) {
    this->mountId = input->readVarInt();
}

void MountRenamedMessage::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}
