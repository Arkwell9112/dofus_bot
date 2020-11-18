#include "ContactLookRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ContactLookRequestMessage::deserialize(CustomDataInput *input) {
    this->_requestIdFunc(input);
    this->_contactTypeFunc(input);
}

void ContactLookRequestMessage::_requestIdFunc(CustomDataInput *input) {
    this->requestId = input->readUnsignedByte();
    if (this->requestId < 0 || this->requestId > 255) {

    }
}

void ContactLookRequestMessage::_contactTypeFunc(CustomDataInput *input) {
    this->contactType = input->readByte();
    if (this->contactType < 0) {

    }
}
