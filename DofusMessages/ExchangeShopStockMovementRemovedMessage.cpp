#include "ExchangeShopStockMovementRemovedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeShopStockMovementRemovedMessage::deserialize(CustomDataInput *input) {
    this->_objectIdFunc(input);
}

void ExchangeShopStockMovementRemovedMessage::_objectIdFunc(CustomDataInput *input) {
    this->objectId = input->readVarUhInt();
    if (this->objectId < 0) {

    }
}
