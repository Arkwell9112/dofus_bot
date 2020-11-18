#include "ProtocolRequired.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ProtocolRequired::deserialize(CustomDataInput *input) {
    this->_versionFunc(input);
}

void ProtocolRequired::_versionFunc(CustomDataInput *input) {
    this->version = input->readUTF();
}
