#include "ExchangeCraftPaymentModificationRequestMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeCraftPaymentModificationRequestMessage::deserialize(CustomDataInput *input) {
    this->_quantityFunc(input);
}

void ExchangeCraftPaymentModificationRequestMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhLong();
    if (this->quantity < 0 || this->quantity > 9007199254740990) {

    }
}
