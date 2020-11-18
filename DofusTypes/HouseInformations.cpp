#include "HouseInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void HouseInformations::deserialize(CustomDataInput *input) {
    this->_houseIdFunc(input);
    this->_modelIdFunc(input);
}

void HouseInformations::_houseIdFunc(CustomDataInput *input) {
    this->houseId = input->readVarUhInt();
    if (this->houseId < 0) {

    }
}

void HouseInformations::_modelIdFunc(CustomDataInput *input) {
    this->modelId = input->readVarUhShort();
    if (this->modelId < 0) {

    }
}
