#include "SymbioticObjectAssociatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void SymbioticObjectAssociatedMessage::deserialize(CustomDataInput *input) {
    this->_hostUIDFunc(input);
}

void SymbioticObjectAssociatedMessage::_hostUIDFunc(CustomDataInput *input) {
    this->hostUID = input->readVarUhInt();
    if (this->hostUID < 0) {

    }
}
