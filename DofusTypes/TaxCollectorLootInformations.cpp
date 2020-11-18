#include "TaxCollectorLootInformations.h"
#include "TaxCollectorComplementaryInformations.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void TaxCollectorLootInformations::deserialize(CustomDataInput *input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->_kamasFunc(input);
    this->_experienceFunc(input);
    this->_podsFunc(input);
    this->_itemsValueFunc(input);
}

void TaxCollectorLootInformations::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}

void TaxCollectorLootInformations::_experienceFunc(CustomDataInput *input) {
    this->experience = input->readVarUhLong();
    if (this->experience < 0 || this->experience > 9007199254740990) {

    }
}

void TaxCollectorLootInformations::_podsFunc(CustomDataInput *input) {
    this->pods = input->readVarUhInt();
    if (this->pods < 0) {

    }
}

void TaxCollectorLootInformations::_itemsValueFunc(CustomDataInput *input) {
    this->itemsValue = input->readVarUhLong();
    if (this->itemsValue < 0 || this->itemsValue > 9007199254740990) {

    }
}
