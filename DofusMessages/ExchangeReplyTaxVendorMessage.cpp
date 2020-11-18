#include "ExchangeReplyTaxVendorMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeReplyTaxVendorMessage::deserialize(CustomDataInput *input) {
    this->_objectValueFunc(input);
    this->_totalTaxValueFunc(input);
}

void ExchangeReplyTaxVendorMessage::_objectValueFunc(CustomDataInput *input) {
    this->objectValue = input->readVarUhLong();
    if (this->objectValue < 0 || this->objectValue > 9007199254740990) {

    }
}

void ExchangeReplyTaxVendorMessage::_totalTaxValueFunc(CustomDataInput *input) {
    this->totalTaxValue = input->readVarUhLong();
    if (this->totalTaxValue < 0 || this->totalTaxValue > 9007199254740990) {

    }
}
