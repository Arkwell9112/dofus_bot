#include "ExchangeBidHousePriceMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeBidHousePriceMessage::deserialize(CustomDataInput *input) {
    this->_genIdFunc(input);
}

void ExchangeBidHousePriceMessage::_genIdFunc(CustomDataInput *input) {
    this->genId = input->readVarUhShort();
    if (this->genId < 0) {

    }
}
