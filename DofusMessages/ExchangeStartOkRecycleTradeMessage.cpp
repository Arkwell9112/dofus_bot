#include "ExchangeStartOkRecycleTradeMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeStartOkRecycleTradeMessage::deserialize(CustomDataInput *input) {
    this->_percentToPrismFunc(input);
    this->_percentToPlayerFunc(input);
}

void ExchangeStartOkRecycleTradeMessage::_percentToPrismFunc(CustomDataInput *input) {
    this->percentToPrism = input->readShort();
    if (this->percentToPrism < 0) {

    }
}

void ExchangeStartOkRecycleTradeMessage::_percentToPlayerFunc(CustomDataInput *input) {
    this->percentToPlayer = input->readShort();
    if (this->percentToPlayer < 0) {

    }
}
