#include "TaxCollectorInformations.h"
#include "AdditionalTaxCollectorInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void AdditionalTaxCollectorInformations::deserialize(CustomDataInput *input) {
    this->_collectorCallerNameFunc(input);
    this->_dateFunc(input);
}

void AdditionalTaxCollectorInformations::_collectorCallerNameFunc(CustomDataInput *input) {
    this->collectorCallerName = input->readUTF();
}

void AdditionalTaxCollectorInformations::_dateFunc(CustomDataInput *input) {
    this->date = input->readInt();
    if (this->date < 0) {

    }
}
