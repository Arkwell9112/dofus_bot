#include "KamaDebtInformation.h"
#include "DebtInformation.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void KamaDebtInformation::deserialize(CustomDataInput *input) {
    DebtInformation::deserialize(input);
    this->_kamasFunc(input);
}

void KamaDebtInformation::_kamasFunc(CustomDataInput *input) {
    this->kamas = input->readVarUhLong();
    if (this->kamas < 0 || this->kamas > 9007199254740990) {

    }
}
