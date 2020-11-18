#include "TaxCollectorStaticInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorStaticInformations::deserialize(CustomDataInput *input) {
    this->_firstNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->guildIdentity.deserialize(input);
    this->_callerIdFunc(input);
}

void TaxCollectorStaticInformations::_firstNameIdFunc(CustomDataInput *input) {
    this->firstNameId = input->readVarUhShort();
    if (this->firstNameId < 0) {

    }
}

void TaxCollectorStaticInformations::_lastNameIdFunc(CustomDataInput *input) {
    this->lastNameId = input->readVarUhShort();
    if (this->lastNameId < 0) {

    }
}

void TaxCollectorStaticInformations::_callerIdFunc(CustomDataInput *input) {
    this->callerId = input->readVarUhLong();
    if (this->callerId < 0 || this->callerId > 9007199254740990) {

    }
}
