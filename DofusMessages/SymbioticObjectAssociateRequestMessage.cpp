#include "SymbioticObjectAssociateRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SymbioticObjectAssociateRequestMessage::deserialize(CustomDataInput *input) {
    this->_symbioteUIDFunc(input);
    this->_symbiotePosFunc(input);
    this->_hostUIDFunc(input);
    this->_hostPosFunc(input);
}

void SymbioticObjectAssociateRequestMessage::_symbioteUIDFunc(CustomDataInput *input) {
    this->symbioteUID = input->readVarUhInt();
    if (this->symbioteUID < 0) {

    }
}

void SymbioticObjectAssociateRequestMessage::_symbiotePosFunc(CustomDataInput *input) {
    this->symbiotePos = input->readUnsignedByte();
    if (this->symbiotePos < 0 || this->symbiotePos > 255) {

    }
}

void SymbioticObjectAssociateRequestMessage::_hostUIDFunc(CustomDataInput *input) {
    this->hostUID = input->readVarUhInt();
    if (this->hostUID < 0) {

    }
}

void SymbioticObjectAssociateRequestMessage::_hostPosFunc(CustomDataInput *input) {
    this->hostPos = input->readUnsignedByte();
    if (this->hostPos < 0 || this->hostPos > 255) {

    }
}
