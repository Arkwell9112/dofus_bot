#include "ExchangeObjectMovePricedMessage.h"
#include "ExchangeObjectModifyPricedMessage.h"
#include "../BotCoreAPI/BotCoreAPI.h"

void ExchangeObjectModifyPricedMessage::deserialize(CustomDataInput *input) {
    ExchangeObjectMovePricedMessage::deserialize(input);
}