#include "MountInformationsForPaddock.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void MountInformationsForPaddock::deserialize(CustomDataInput *input) {
    this->_modelIdFunc(input);
    this->_nameFunc(input);
    this->_ownerNameFunc(input);
}

void MountInformationsForPaddock::_modelIdFunc(CustomDataInput *input) {
    this->modelId = input->readVarUhShort();
    if (this->modelId < 0) {

    }
}

void MountInformationsForPaddock::_nameFunc(CustomDataInput *input) {
    this->name = input->readUTF();
}

void MountInformationsForPaddock::_ownerNameFunc(CustomDataInput *input) {
    this->ownerName = input->readUTF();
}
