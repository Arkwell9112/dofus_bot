#include "WrapperObjectDissociateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void WrapperObjectDissociateRequestMessage::deserialize(CustomDataInput *input) {
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void WrapperObjectDissociateRequestMessage::_hostUIDFunc(CustomDataInput *input) {
    this->hostUID = input->readVarUhInt();
    if (this->hostUID < 0) {

    }
}

void WrapperObjectDissociateRequestMessage::_hostPosFunc(CustomDataInput *input) {
    this->hostPos = input->readUnsignedByte();
    if (this->hostPos < 0 || this->hostPos > 255) {

    }
}
