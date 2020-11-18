#include "AnomalySubareaInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AnomalySubareaInformation::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_rewardRateFunc(input);
    this->_hasAnomalyFunc(input);
    this->_anomalyClosingTimeFunc(input);
}

void AnomalySubareaInformation::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void AnomalySubareaInformation::_rewardRateFunc(CustomDataInput *input) {
    this->rewardRate = input->readVarShort();
}

void AnomalySubareaInformation::_hasAnomalyFunc(CustomDataInput *input) {
    this->hasAnomaly = input->readBoolean();
}

void AnomalySubareaInformation::_anomalyClosingTimeFunc(CustomDataInput *input) {
    this->anomalyClosingTime = input->readVarUhLong();
    if (this->anomalyClosingTime < 0 || this->anomalyClosingTime > 9007199254740990) {

    }
}
