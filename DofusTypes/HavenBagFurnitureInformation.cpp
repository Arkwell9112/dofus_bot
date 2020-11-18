#include "HavenBagFurnitureInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HavenBagFurnitureInformation::deserialize(CustomDataInput *input) {
    this->_cellIdFunc(input);
    this->_funitureIdFunc(input);
    this->_orientationFunc(input);
}

void HavenBagFurnitureInformation::_cellIdFunc(CustomDataInput *input) {
    this->cellId = input->readVarUhShort();
    if (this->cellId < 0) {

    }
}

void HavenBagFurnitureInformation::_funitureIdFunc(CustomDataInput *input) {
    this->funitureId = input->readInt();
}

void HavenBagFurnitureInformation::_orientationFunc(CustomDataInput *input) {
    this->orientation = input->readByte();
    if (this->orientation < 0) {

    }
}
