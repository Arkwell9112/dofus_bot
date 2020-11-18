#include "ExchangeObjectMovePricedMessage.h"
#include "ExchangeObjectMoveMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectMovePricedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMoveMessage::deserialize(input);
    this->_priceFunc(input);
}

void ExchangeObjectMovePricedMessage::_priceFunc(CustomDataInput *input) {
    this->price = input->readVarUhLong();
    if (this->price < 0 || this->price > 9007199254740990) {

    }
}
