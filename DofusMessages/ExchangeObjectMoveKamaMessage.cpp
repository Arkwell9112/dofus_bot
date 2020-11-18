#include "ExchangeObjectMoveKamaMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectMoveKamaMessage::deserialize(CustomDataInput *input) {
    this->_quantityFunc(input);
}

void ExchangeObjectMoveKamaMessage::_quantityFunc(CustomDataInput *input) {
    this->quantity = input->readVarLong();
    if (this->quantity < -9007199254740990 || this->quantity > 9007199254740990) {

    }
}
