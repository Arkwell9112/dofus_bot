#include "PrismSubareaEmptyInfo.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void PrismSubareaEmptyInfo::deserialize(CustomDataInput *input) {
    this->_subAreaIdFunc(input);
    this->_allianceIdFunc(input);
}

void PrismSubareaEmptyInfo::_subAreaIdFunc(CustomDataInput *input) {
    this->subAreaId = input->readVarUhShort();
    if (this->subAreaId < 0) {

    }
}

void PrismSubareaEmptyInfo::_allianceIdFunc(CustomDataInput *input) {
    this->allianceId = input->readVarUhInt();
    if (this->allianceId < 0) {

    }
}
