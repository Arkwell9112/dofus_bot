#include "ExchangeObjectMessage.h"
#include "ExchangeKamaModifiedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeKamaModifiedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMessage::deserialize(input);
    this->_quantityFunc(input);
}

void ExchangeKamaModifiedMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarUhLong();
    if (this->quantity < 0 || this->quantity > 9007199254740990) {

    }
}
