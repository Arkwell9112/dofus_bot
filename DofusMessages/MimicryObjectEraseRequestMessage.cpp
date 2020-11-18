#include "MimicryObjectEraseRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MimicryObjectEraseRequestMessage::deserialize(CustomDataInput *input) {
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void MimicryObjectEraseRequestMessage::_hostUIDFunc(CustomDataInput *input) {
    this->hostUID = input->readVarUhInt();
    if (this->hostUID < 0) {

    }
}

void MimicryObjectEraseRequestMessage::_hostPosFunc(CustomDataInput *input) {
    this->hostPos = input->readUnsignedByte();
    if (this->hostPos < 0 || this->hostPos > 255) {

    }
}
