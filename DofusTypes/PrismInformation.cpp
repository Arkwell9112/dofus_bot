#include "PrismInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismInformation::deserialize(CustomDataInput *input) {
    this->_typeIdFunc(input);
    this->_stateFunc(input);
    this->_nextVulnerabilityDateFunc(input);
    this->_placementDateFunc(input);
    this->_rewardTokenCountFunc(input);
}

void PrismInformation::_typeIdFunc(CustomDataInput *input) {
    this->typeId = input->readByte();
    if (this->typeId < 0) {

    }
}

void PrismInformation::_stateFunc(CustomDataInput *input) {
    this->state = input->readByte();
    if (this->state < 0) {

    }
}

void PrismInformation::_nextVulnerabilityDateFunc(CustomDataInput *input) {
    this->nextVulnerabilityDate = input->readInt();
    if (this->nextVulnerabilityDate < 0) {

    }
}

void PrismInformation::_placementDateFunc(CustomDataInput *input) {
    this->placementDate = input->readInt();
    if (this->placementDate < 0) {

    }
}

void PrismInformation::_rewardTokenCountFunc(CustomDataInput *input) {
    this->rewardTokenCount = input->readVarUhInt();
    if (this->rewardTokenCount < 0) {

    }
}
