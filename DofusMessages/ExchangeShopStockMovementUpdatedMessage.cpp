#include "ExchangeShopStockMovementUpdatedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeShopStockMovementUpdatedMessage::deserialize(CustomDataInput *input) {
    this->objectInfo.deserialize(input);
}