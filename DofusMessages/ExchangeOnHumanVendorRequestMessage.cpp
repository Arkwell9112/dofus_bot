#include "ExchangeOnHumanVendorRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeOnHumanVendorRequestMessage::deserialize(CustomDataInput *input) {
    this->_humanVendorIdFunc(input);
    this->_humanVendorCellFunc(input);
}

void ExchangeOnHumanVendorRequestMessage::_humanVendorIdFunc(CustomDataInput *input) {
    this->humanVendorId = input->readVarUhLong();
    if (this->humanVendorId < 0 || this->humanVendorId > 9007199254740990) {

    }
}

void ExchangeOnHumanVendorRequestMessage::_humanVendorCellFunc(CustomDataInput *input) {
    this->humanVendorCell = input->readVarUhShort();
    if (this->humanVendorCell < 0 || this->humanVendorCell > 559) {

    }
}
